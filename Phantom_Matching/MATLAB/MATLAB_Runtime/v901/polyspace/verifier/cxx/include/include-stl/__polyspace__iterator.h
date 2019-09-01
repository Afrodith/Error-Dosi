/*
 * Copyright 2012 The MathWorks, Inc.
 */
#ifndef __polyspace__iterator_h
#define __polyspace__iterator_h

#include <__polyspace__stddef.h>
#include <__polyspace__type_traits>

#ifdef PST_VISUAL
#pragma pack(push, 8) /* push default value */
#endif

namespace std
{

  struct input_iterator_tag {};
  struct output_iterator_tag {};
  struct forward_iterator_tag : public input_iterator_tag {};
  struct bidirectional_iterator_tag : public forward_iterator_tag {};
  struct random_access_iterator_tag : public bidirectional_iterator_tag {};

  // 24.3, primitives:

  template <class Iterator> struct iterator_traits {
    typedef __ps_typename Iterator::difference_type difference_type;
#ifdef PST_VISUAL
    typedef difference_type distance_type;  /* VISUAL - specific */
#endif
    typedef __ps_typename Iterator::value_type value_type;
    typedef __ps_typename Iterator::pointer pointer;
    typedef __ps_typename Iterator::reference reference;
    typedef __ps_typename Iterator::iterator_category iterator_category;
  };

  // specialization for pointers
  template <class T> struct iterator_traits<T*> {
    typedef ptrdiff_t difference_type;
#ifdef PST_VISUAL
    typedef difference_type distance_type;  /* VISUAL - specific */
#endif
    typedef T value_type;
    typedef T* pointer;
    typedef T& reference;
    typedef random_access_iterator_tag iterator_category;
  };

  // specialization for pointers to const
  template <class T> struct iterator_traits<const T*> {
    typedef ptrdiff_t difference_type;
#ifdef PST_VISUAL
    typedef difference_type distance_type;  /* VISUAL - specific */
#endif
    typedef T value_type;
    typedef const T* pointer;
    typedef const T& reference;
    typedef random_access_iterator_tag iterator_category;
  };

  template <class Category, class T, class Distance = ptrdiff_t,
            class Pointer = T*, class Reference = T&>
  struct iterator {
    typedef T value_type;
    typedef Distance difference_type;
#ifdef PST_VISUAL
    typedef difference_type distance_type;  /* VISUAL - specific */
#endif
    typedef Pointer pointer;
    typedef Reference reference;
    typedef Category iterator_category;
  };

  // 24.3.4, iterator operations:

  // constant time implementation for random access iterators
  template <class InputIterator, class Distance>
  void advance(InputIterator& i, Distance n, random_access_iterator_tag) {
    i = i + n;
  }

  // linear time implementation for bidirectional iterators
  template <class InputIterator, class Distance>
  void advance(InputIterator& i, Distance n, bidirectional_iterator_tag) {
    __ps_typename iterator_traits<InputIterator>::difference_type k;
    for (k = 0; k < n; ++k) ++i;
  }

  // linear time implementation for other input iterators
  // n may not be negative for these iterators
  template <class InputIterator, class Distance>
  void advance(InputIterator& i, Distance n, input_iterator_tag) {
    assert(n >= 0); // REQUIRE
    __ps_typename iterator_traits<InputIterator>::difference_type k;
    for (k = 0; k < n; ++k) ++i;
  }

  template <class InputIterator, class Distance>
  inline void advance(InputIterator& i, Distance n) {
    advance(i,n,__ps_typename iterator_traits<InputIterator>::iterator_category());
  }

  template <class InputIterator>
  __ps_typename iterator_traits<InputIterator>::difference_type distance(InputIterator first, InputIterator last, random_access_iterator_tag) {
    return last-first ;
  }

  template <class InputIterator, class Tag>
  __ps_typename iterator_traits<InputIterator>::difference_type distance(InputIterator first, InputIterator last, Tag) {
    InputIterator first_plus_d(first);
    InputIterator last_plus_d(last);
    __ps_typename iterator_traits<InputIterator>::difference_type d = 0;
    while(1) {
      if (first_plus_d == last)
      {
        return d;
      }
      else if (last_plus_d == first)
      {
        return -d;
      }
      else
      {
        ++d ; ++first_plus_d; ++last_plus_d ;
      }
    }
  }

  template <class InputIterator>
  __ps_typename iterator_traits<InputIterator>::difference_type distance(InputIterator first, InputIterator last) {
    return distance(first, last, __ps_typename iterator_traits<InputIterator>::iterator_category());
  }

  // 24.4, predefined iterators:
  template <class Iterator>
  class reverse_iterator : public
        iterator<__ps_typename iterator_traits<Iterator>::iterator_category,
                 __ps_typename iterator_traits<Iterator>::value_type,
                 __ps_typename iterator_traits<Iterator>::difference_type,
                 __ps_typename iterator_traits<Iterator>::pointer,
                 __ps_typename iterator_traits<Iterator>::reference>
  {
  protected:
    Iterator current;
    template<class U> friend class reverse_iterator;
  public:
    typedef Iterator iterator_type;
    typedef __ps_typename iterator_traits<Iterator>::difference_type difference_type;
#ifdef PST_VISUAL
    typedef __ps_typename iterator_traits<Iterator>::distance_type distance_type;
    typedef iterator_type iter_type ;  // Visual 6
#endif
    typedef __ps_typename iterator_traits<Iterator>::reference reference;
    typedef __ps_typename iterator_traits<Iterator>::pointer pointer;

    reverse_iterator() {}

    __ps_explicit reverse_iterator(Iterator x) : current(x) {}

    template <class U> reverse_iterator(const reverse_iterator<U>& u) : current(u.current) {}

    Iterator base() const { // __ps_explicit
      return current;
    }

    reference operator*() const {
      Iterator tmp = current;
      return *--tmp;
    }

    pointer operator->() const {
      return &(operator*());
    }

    reverse_iterator& operator++() {
      --current;
      return *this;
    }

    reverse_iterator operator++(int) {
      reverse_iterator tmp = *this;
      --current;
      return tmp;
    }

    reverse_iterator& operator--() {
      ++current;
      return *this;
    }

    reverse_iterator operator--(int) {
      reverse_iterator tmp = *this;
      ++current;
      return tmp;
    }

    reverse_iterator operator+(difference_type n) const {
      return reverse_iterator(current-n);
    }

    reverse_iterator& operator+=(difference_type n) {
      current -= n;
      return *this;
    }

    reverse_iterator operator-(difference_type n) const {
      return reverse_iterator(current+n);
    }

    reverse_iterator& operator-=(difference_type n) {
      current += n;
      return *this;
    }

    reference operator[](difference_type n) const {
      return current[-n-1];
    }

    /* friends */

  template <class Iterator2>
  friend __ps_bool operator==(const reverse_iterator<Iterator2>& x, const reverse_iterator<Iterator2>& y) ;

  template <class Iterator2>
  friend __ps_bool operator<(const reverse_iterator<Iterator2>& x, const reverse_iterator<Iterator2>& y) ;

  template <class Iterator2>
 friend __ps_bool operator!=(const reverse_iterator<Iterator2>& x, const reverse_iterator<Iterator2>& y) ;

  template <class Iterator2>
  friend __ps_bool operator>(const reverse_iterator<Iterator2>& x, const reverse_iterator<Iterator2>& y) ;

  template <class Iterator2>
  friend __ps_bool operator>=(const reverse_iterator<Iterator2>& x, const reverse_iterator<Iterator2>& y) ;

  template <class Iterator2>
  friend __ps_bool operator<=(const reverse_iterator<Iterator2>& x, const reverse_iterator<Iterator2>& y) ;

  template <class Iterator2>
  friend __ps_typename reverse_iterator<Iterator2>::difference_type operator-(const reverse_iterator<Iterator2>&
x,
                                                                        const reverse_iterator<Iterator2>& y) ;

  template <class Iterator2>
  friend reverse_iterator<Iterator2> operator+(__ps_typename reverse_iterator<Iterator2>::difference_type n,
                                              const reverse_iterator<Iterator2>& x) ;

  }; /* class reverse_iterator */

  #define __pst__reverse_iterator reverse_iterator

  template <class Iterator>
  __ps_bool operator==(const reverse_iterator<Iterator>& x, const reverse_iterator<Iterator>& y) {
    return x.current == y.current;
  }

  template <class Iterator>
  __ps_bool operator<(const reverse_iterator<Iterator>& x, const reverse_iterator<Iterator>& y) {
    return x.current > y.current;
  }

  template <class Iterator>
  __ps_bool operator!=(const reverse_iterator<Iterator>& x, const reverse_iterator<Iterator>& y) {
    return x.current != y.current;
  }


  template <class Iterator>
  __ps_bool operator>(const reverse_iterator<Iterator>& x, const reverse_iterator<Iterator>& y) {
    return x.current < y.current;
  }

  template <class Iterator>
  __ps_bool operator>=(const reverse_iterator<Iterator>& x, const reverse_iterator<Iterator>& y) {
    return x.current <= y.current;
  }

  template <class Iterator>
  __ps_bool operator<=(const reverse_iterator<Iterator>& x, const reverse_iterator<Iterator>& y) {
    return x.current >= y.current;
  }

  template <class Iterator>
  __ps_typename reverse_iterator<Iterator>::difference_type operator-(const reverse_iterator<Iterator>& x,
                                                                 const reverse_iterator<Iterator>& y) {
    return y.current - x.current;
  }

  template <class Iterator>
  reverse_iterator<Iterator> operator+(__ps_typename reverse_iterator<Iterator>::difference_type n,
                                       const reverse_iterator<Iterator>& x) {
    return reverse_iterator<Iterator> (x.current - n);
  }

#ifdef PST_VISUAL

  template<class bid_it,
           class T,
           class Reference = T&,
           class Pointer = T*,
           class Diff = ptrdiff_t>
  class reverse_bidirectional_iterator : public iterator<bidirectional_iterator_tag, T, Diff, Pointer, Reference>
  {
  protected:
    iterator_type current;

  public :
    typedef bid_it iterator_type ;  // Visual 7.1
    typedef bid_it iter_type ;  // Visual 6

    reverse_bidirectional_iterator() { ; }

    __ps_explicit reverse_bidirectional_iterator(Iterator x) : current(x) {}

    iterator_type base() const {
      return current;
    }

    reference operator*() const {
      Iterator tmp = current;
      return *--tmp;
    }

    pointer operator->() const {
      return &(operator*());
    }

    reverse_bidirectional_iterator& operator++() {
      --current;
      return *this;
    }

    reverse_bidirectional_iterator operator++(int) {
      reverse_bidirectional_iterator tmp = *this;
      --current;
      return tmp;
    }

    reverse_bidirectional_iterator& operator--() {
      ++current;
      return *this;
    }

    reverse_bidirectional_iterator operator--(int) {
      reverse_bidirectional_iterator tmp = *this;
      ++current;
      return tmp;
    }

    __ps_bool operator==(const reverse_bidirectional_iterator& other) const
    {
      return current == other.current ;
    }

    __ps_bool operator!=(const reverse_bidirectional_iterator& other) const
    {
      return current != other.current ;
    }

  } ; /* class reverse_bidirectional_iterator */

#endif /* PST_VISUAL */

  template <class Container>
  class back_insert_iterator : public iterator<output_iterator_tag,void,void,void,void>
  {
  protected:
    Container* container;
  public:
    typedef Container container_type;

#ifdef PST_VISUAL
    // Visual 6
#if _MSC_VER <= 1200
    typedef __ps_typename Container::value_type value_type ;
#endif
    // Visual 6 & 7.1
    typedef __ps_typename Container::reference reference ;
#endif
    __ps_explicit back_insert_iterator(Container& x) : container(&x) {}

    back_insert_iterator<Container>& operator=(__ps_typename Container::const_reference value) {
      container->push_back(value);
      return *this;
    }

    back_insert_iterator<Container>& operator*() { return *this; }
    back_insert_iterator<Container>& operator++() { return *this; }
    back_insert_iterator<Container> operator++(int) { return *this; }
  }; /* class back_insert_iterator */

  template <class Container> inline back_insert_iterator<Container> back_inserter(Container& x) {
    return back_insert_iterator<Container>(x);
  }

  template <class Container>
  class front_insert_iterator : public iterator<output_iterator_tag,void,void,void,void>
  {
  protected:
    Container* container;
  public:
    typedef Container container_type;

#ifdef PST_VISUAL
    // Visual 6
#if _MSC_VER <= 1200
    typedef Container::value_type value_type ;
#endif
    // Visual 7.1
    typedef __ps_typename Container::reference reference ;
#endif

    __ps_explicit front_insert_iterator(Container& x) : container(&x) {}

    front_insert_iterator<Container>& operator=(__ps_typename Container::const_reference value) {
      container->push_front(value);
      return *this;
    }

    front_insert_iterator<Container>& operator*() { return *this; }

    front_insert_iterator<Container>& operator++() { return *this; }

    front_insert_iterator<Container> operator++(int) { return *this; }
  }; /* class front_insert_iterator */

  template <class Container> inline front_insert_iterator<Container> front_inserter(Container& x) {
    return front_insert_iterator<Container>(x);
  }

  template <class Container>
  class insert_iterator : public iterator<output_iterator_tag,void,void,void,void>
  {
  protected:
    Container* container;
    __ps_typename Container::iterator iter;
  public:
    typedef Container container_type;
#ifdef PST_VISUAL
    // Visual 6
#if _MSC_VER <= 1200
    typedef Container::value_type value_type ;
#endif
    // Visual 7.1
    typedef __ps_typename Container::reference reference ;
#endif

    insert_iterator(Container& x, __ps_typename Container::iterator i) : container(&x), iter(i) {}

    insert_iterator<Container>& operator=(__ps_typename Container::const_reference value) {
      iter = container->insert(iter, value);
      ++iter;
      return *this;
    }

    insert_iterator<Container>& operator*() { return *this; }

    insert_iterator<Container>& operator++() { return *this; }

    insert_iterator<Container>& operator++(int) { return *this; }
  }; /* class insert_iterator */
  
  template <class Container, class Inserter> inline insert_iterator<Container> inserter(Container& x, Inserter i)
  {
    return insert_iterator<Container>(x,__ps_typename Container::iterator(i));
  }

}

  // implementation of a general input iterator, general output iterator, general forward iterator,
  // general bidirectional iterator and general random access iterator are the same
  // except for the tag used in iterator_category ; 
  // in all cases, all typedef are inlined


namespace std
{

  template <class iterator_tag, class T> struct __pst__normal_iterator
    : public iterator<iterator_tag, T>
  {
  public :
      typedef __ps_typename iterator_traits<T>::value_type value_type;
      typedef __ps_typename iterator_traits<T>::difference_type difference_type;
#ifdef PST_VISUAL
      typedef __ps_typename iterator_traits<T>::distance_type distance_type;    
#endif
    typedef __ps_typename iterator_traits<T>::pointer   pointer;
    typedef __ps_typename iterator_traits<T>::reference reference;

    typedef __ps_typename iterator_traits<T>::iterator_category iterator_category;
  protected:
    T cur;

  public:
   __pst__normal_iterator() : cur(0) {}

   /* made public so that comparison with 0 is possible */
   __pst__normal_iterator(pointer p) : cur(p) { }
   __pst__normal_iterator(const __pst__normal_iterator& src) : cur(src.cur) { }

    // Enable conversion from iterator to const_iterator.
    template<__ps_class _Iter>
    __pst__normal_iterator(const __pst__normal_iterator<
                               __ps_typename ps_enable_if<
                                   (std::ps_is_same<_Iter, __ps_class iterator_tag::pointer>::__value),
                                   iterator_tag>::__type,
                               _Iter>& __i)
        : cur(__i.base()) { }

    const T& base() const { return cur; }

    friend __ps_bool operator==(const __pst__normal_iterator& x, const __pst__normal_iterator& y) {
      return (x.cur == y.cur);
    }

    friend __ps_bool operator!=(const __pst__normal_iterator& x, const __pst__normal_iterator& y) {
      return (x.cur != y.cur);
    }

    reference operator*() const {
      return *cur;
    }

    pointer operator->() const {
      return cur;
    }

    __pst__normal_iterator& operator++() {
      ++cur;
      return *this;
    }

    __pst__normal_iterator operator++(int) {
      return __pst__normal_iterator(cur++);
    }

    __pst__normal_iterator& operator--() {
      --cur;
      return *this;
    }

    __pst__normal_iterator operator--(int) {
      return __pst__normal_iterator(cur--);
    }

    __pst__normal_iterator& operator+=(difference_type n) {
      cur += n;
      return *this;
    }

    __pst__normal_iterator operator+(difference_type n) const {
      return __pst__normal_iterator(*this);
    }

    friend __pst__normal_iterator operator+(difference_type n, const __pst__normal_iterator& src) {
      return __pst__normal_iterator(src.cur + n);
    }

    __pst__normal_iterator& operator-=(difference_type n) {
      cur -= n;
      return *this;
    }

    __pst__normal_iterator operator-(difference_type n) const {
      return __pst__normal_iterator(cur - n);
    }

    friend difference_type operator-(const __pst__normal_iterator& x, const __pst__normal_iterator& y) {
      return x.cur - y.cur;
    }

    reference operator[](difference_type n) const {
      return cur[n];
    }

    friend __ps_bool operator<(const __pst__normal_iterator& x, const __pst__normal_iterator& y) {
      return x.cur < y.cur;
    }

    friend __ps_bool operator>(const __pst__normal_iterator& x, const __pst__normal_iterator& y) {
      return x.cur > y.cur;
    }

    friend __ps_bool operator>=(const __pst__normal_iterator& x, const __pst__normal_iterator& y) {
      return x.cur >= y.cur;
    }

    friend __ps_bool operator<=(const __pst__normal_iterator& x, const __pst__normal_iterator& y) {
      return x.cur <= y.cur;
    }
  };

  template <class iterator_tag, class T> struct __pst__generic_iterator 
    : public iterator<iterator_tag, T>
  {
  public :
    typedef T            value_type;
    typedef ptrdiff_t    difference_type;
#ifdef PST_VISUAL
    typedef ptrdiff_t    distance_type;    
#endif
    typedef T* pointer;
    typedef T& reference;
    typedef iterator_tag iterator_category;
  protected:
    pointer ref;
    pointer cur;

  private:
    void _pst_randomize_cur()
    {
      volatile int random = 0 ;
      if (random)
      {
	cur = ref ;
      }
      else
      {
	value_type * volatile random_ptr  ;
	cur = random_ptr ;
      }
    }
  public:
    __pst__generic_iterator() : ref(0), cur(0) {}

   /* made public so that comparison with 0 is possible */
   __pst__generic_iterator(pointer p) : ref(p) { _pst_randomize_cur() ; }
   __pst__generic_iterator(const __pst__generic_iterator& src) : ref(src.ref) { _pst_randomize_cur() ; }

#ifdef  PST_STL_PERMISSIVE_STUB 
    /* make possible to construct iterator from an "other" iterator with a bad cast*/

   template <class I2, class T2>
   friend class __pst__generic_iterator ;

   template <class I2, class T2>
   __pst__generic_iterator(const __pst__generic_iterator<I2, T2>& src) : ref((pointer)src.ref) { _pst_randomize_cur() ; }
  
#endif /* PST_STL_PERMISSIVE_STUB */

    friend __ps_bool operator==(const __pst__generic_iterator& x, const __pst__generic_iterator& y) {
      return x.cur == y.cur;   /* always orange ? */
    }

    friend __ps_bool operator!=(const __pst__generic_iterator& x, const __pst__generic_iterator& y) {
      return x.cur != y.cur;
    }

    reference operator*() const {
      assert(cur != 0); /* valid iterator */
      return *cur;
    }

    pointer operator->() const {
      assert(cur != 0); /* valid iterator */
      return cur;
    }

    __pst__generic_iterator& operator++() {
      _pst_randomize_cur() ;
      return *this;
    }

    __pst__generic_iterator operator++(int) {
      __pst__generic_iterator tmp = *this; 
      _pst_randomize_cur() ;
      return tmp;
    }

    __pst__generic_iterator& operator--() {
      _pst_randomize_cur() ;
      return *this;
    }

    __pst__generic_iterator operator--(int) {
      __pst__generic_iterator tmp = *this; 
      _pst_randomize_cur() ;
      return tmp;
    }

    __pst__generic_iterator& operator+=(difference_type n) {
      _pst_randomize_cur() ;
      return *this;
    }

    __pst__generic_iterator operator+(difference_type n) const {
      return __pst__generic_iterator(*this);
    }

    friend __pst__generic_iterator operator+(difference_type n, const __pst__generic_iterator& src) {
      return __pst__generic_iterator(src);
    }

    __pst__generic_iterator& operator-=(difference_type n) {
      _pst_randomize_cur() ;
      return *this;
    }

    __pst__generic_iterator operator-(difference_type n) const {
      return __pst__generic_iterator(*this);
    }

    friend difference_type operator-(const __pst__generic_iterator& x, const __pst__generic_iterator& y) {
      return (x.cur < y.cur) ? y.cur - x.cur : x.cur - y.cur;
    }

    reference operator[](difference_type n) const {
      volatile int random = 0 ;
      if (random) {
	  return *ref ;
	} else {
	  value_type * volatile random_ptr  ;
	  return *random_ptr ;
	}
    }

    friend __ps_bool operator<(const __pst__generic_iterator& x, const __pst__generic_iterator& y) {
      return x.cur < y.cur;
    }

    friend __ps_bool operator>(const __pst__generic_iterator& x, const __pst__generic_iterator& y) {
      return x.cur > y.cur;
    }

    friend __ps_bool operator>=(const __pst__generic_iterator& x, const __pst__generic_iterator& y) {
      return x.cur >= y.cur;
    }

    friend __ps_bool operator<=(const __pst__generic_iterator& x, const __pst__generic_iterator& y) {
      return x.cur <= y.cur;
    }
  };

} /* namespace std */

#ifdef __PST_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __PST_IMPLICIT_USING_STD */

#ifdef PST_VISUAL
#pragma pack(pop) /* pop back to previous value */
#endif

#endif /* __polyspace__iterator_h */

/* LocalWords:  ps
 */

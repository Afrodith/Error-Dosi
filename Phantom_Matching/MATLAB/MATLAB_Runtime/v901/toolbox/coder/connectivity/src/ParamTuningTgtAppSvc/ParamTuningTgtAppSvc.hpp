//
// ParamTuning Target-side App Service
//

#ifndef ParamTuningTgtAppSvc_hpp
#define ParamTuningTgtAppSvc_hpp

#include "coder/target_services/Application.hpp"
#ifdef BUILDING_LIBMWCODER_PARAMTUNINGTGTAPPSVC
#  include "coder/target_services/CommService.hpp" // Use exported header for internal builds
#else
#  include "CommService.hpp" // Use local header for target builds
#endif

class ParamTuningTgtAppSvc : public coder::tgtsvc::Application
{
  public:
    ParamTuningTgtAppSvc();
    ~ParamTuningTgtAppSvc();

    void send(uint16_t id, double time, void *data, uint16_t sizeOfData);
    void handleMessage(coder::tgtsvc::Message *message);

    uint8_t id() { return(coder::tgtsvc::Application::PARAM_TUNING_ID); }

    virtual void handleConnect(bool connected) {};

    typedef boost::shared_ptr<coder::tgtsvc::Message> messagePtrType;
    typedef std::deque<messagePtrType>                messageDequeType;
    messageDequeType paramTuneMessages;
    bool readyToTuneParameters;

  private:
    ParamTuningTgtAppSvc(const ParamTuningTgtAppSvc &);                  // copy constructor
    const ParamTuningTgtAppSvc& operator=(const ParamTuningTgtAppSvc &); // assignment operator
};

#endif // ParamTuningTgtAppSvc_hpp


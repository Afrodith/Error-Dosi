/* $Revision: 1.2 $ */
#ifndef _LCC_MMREG
#define _LCC_MMREG 144 
#ifndef RC_INVOKED
#pragma pack(push,1) 
#endif 
#ifndef NOMMIDS
#ifndef MM_MICROSOFT
#define MM_MICROSOFT 1 
#endif
#define MM_CREATIVE 2 
#define MM_MEDIAVISION 3 
#define MM_FUJITSU 4 
#define MM_ARTISOFT 20 
#define MM_TURTLE_BEACH 21 
#define MM_IBM 22 
#define MM_VOCALTEC 23 
#define MM_ROLAND 24 
#define MM_DSP_SOLUTIONS 25 
#define MM_NEC 26 
#define MM_ATI 27 
#define MM_WANGLABS 28 
#define MM_TANDY 29 
#define MM_VOYETRA 30 
#define MM_ANTEX 31 
#define MM_ICL_PS 32 
#define MM_INTEL 33 
#define MM_GRAVIS 34 
#define MM_VAL 35 
#define MM_INTERACTIVE 36 
#define MM_YAMAHA 37 
#define MM_EVEREX 38 
#define MM_ECHO 39 
#define MM_SIERRA 40 
#define MM_CAT 41 
#define MM_APPS 42 
#define MM_DSP_GROUP 43 
#define MM_MELABS 44 
#define MM_COMPUTER_FRIENDS 45 
#define MM_ESS 46 
#define MM_AUDIOFILE 47 
#define MM_MOTOROLA 48 
#define MM_CANOPUS 49 
#define MM_EPSON 50 
#define MM_TRUEVISION 51 
#define MM_AZTECH 52 
#define MM_VIDEOLOGIC 53 
#define MM_SCALACS 54 
#define MM_KORG 55 
#define MM_APT 56 
#define MM_ICS 57 
#define MM_ITERATEDSYS 58 
#define MM_METHEUS 59 
#define MM_LOGITECH 60 
#define MM_WINNOV 61 
#define MM_NCR 62 
#define MM_EXAN 63 
#define MM_AST 64 
#define MM_WILLOWPOND 65 
#define MM_SONICFOUNDRY 66 
#define MM_VITEC 67 
#define MM_MOSCOM 68 
#define MM_SILICONSOFT 69 
#define MM_SUPERMAC 73 
#define MM_AUDIOPT 74 
#define MM_SPEECHCOMP 76 
#define MM_DOLBY 78 
#define MM_OKI 79 
#define MM_AURAVISION 80 
#define MM_OLIVETTI 81 
#define MM_IOMAGIC 82 
#define MM_MATSUSHITA 83 
#define MM_CONTROLRES 84 
#define MM_XEBEC 85 
#define MM_NEWMEDIA 86 
#define MM_NMS 87 
#define MM_LYRRUS 88 
#define MM_COMPUSIC 89 
#define MM_OPTI 90 
#define MM_DIALOGIC 93 
#ifndef MM_MIDI_MAPPER
#define MM_MIDI_MAPPER 1 
#define MM_WAVE_MAPPER 2 
#define MM_SNDBLST_MIDIOUT 3 
#define MM_SNDBLST_MIDIIN 4 
#define MM_SNDBLST_SYNTH 5 
#define MM_SNDBLST_WAVEOUT 6 
#define MM_SNDBLST_WAVEIN 7 
#define MM_ADLIB 9 
#define MM_MPU401_MIDIOUT 10 
#define MM_MPU401_MIDIIN 11 
#define MM_PC_JOYSTICK 12 
#endif
#define MM_PCSPEAKER_WAVEOUT 13 
#define MM_MSFT_WSS_WAVEIN 14 
#define MM_MSFT_WSS_WAVEOUT 15 
#define MM_MSFT_WSS_FMSYNTH_STEREO 16 
#define MM_MSFT_WSS_MIXER 17 
#define MM_MSFT_WSS_OEM_WAVEIN 18 
#define MM_MSFT_WSS_OEM_WAVEOUT 19 
#define MM_MSFT_WSS_OEM_FMSYNTH_STEREO 20 
#define MM_MSFT_WSS_AUX 21 
#define MM_MSFT_WSS_OEM_AUX 22 
#define MM_MSFT_GENERIC_WAVEIN 23 
#define MM_MSFT_GENERIC_WAVEOUT 24 
#define MM_MSFT_GENERIC_MIDIIN 25 
#define MM_MSFT_GENERIC_MIDIOUT 26 
#define MM_MSFT_GENERIC_MIDISYNTH 27 
#define MM_MSFT_GENERIC_AUX_LINE 28 
#define MM_MSFT_GENERIC_AUX_MIC 29 
#define MM_MSFT_GENERIC_AUX_CD 30 
#define MM_MSFT_WSS_OEM_MIXER 31 
#define MM_MSFT_MSACM 32 
#define MM_MSFT_ACM_MSADPCM 33 
#define MM_MSFT_ACM_IMAADPCM 34 
#define MM_MSFT_ACM_MSFILTER 35 
#define MM_MSFT_ACM_GSM610 36 
#define MM_MSFT_ACM_G711 37 
#define MM_MSFT_ACM_PCM 38 
#define MM_WSS_SB16_WAVEIN 39 
#define MM_WSS_SB16_WAVEOUT 40 
#define MM_WSS_SB16_MIDIIN 41 
#define MM_WSS_SB16_MIDIOUT 42 
#define MM_WSS_SB16_SYNTH 43 
#define MM_WSS_SB16_AUX_LINE 44 
#define MM_WSS_SB16_AUX_CD 45 
#define MM_WSS_SB16_MIXER 46 
#define MM_WSS_SBPRO_WAVEIN 47 
#define MM_WSS_SBPRO_WAVEOUT 48 
#define MM_WSS_SBPRO_MIDIIN 49 
#define MM_WSS_SBPRO_MIDIOUT 50 
#define MM_WSS_SBPRO_SYNTH 51 
#define MM_WSS_SBPRO_AUX_LINE 52 
#define MM_WSS_SBPRO_AUX_CD 53 
#define MM_WSS_SBPRO_MIXER 54 
#define MM_MSFT_WSS_NT_WAVEIN 55 
#define MM_MSFT_WSS_NT_WAVEOUT 56 
#define MM_MSFT_WSS_NT_FMSYNTH_STEREO 57 
#define MM_MSFT_WSS_NT_MIXER 58 
#define MM_MSFT_WSS_NT_AUX 59 
#define MM_MSFT_SB16_WAVEIN 60 
#define MM_MSFT_SB16_WAVEOUT 61 
#define MM_MSFT_SB16_MIDIIN 62 
#define MM_MSFT_SB16_MIDIOUT 63 
#define MM_MSFT_SB16_SYNTH 64 
#define MM_MSFT_SB16_AUX_LINE 65 
#define MM_MSFT_SB16_AUX_CD 66 
#define MM_MSFT_SB16_MIXER 67 
#define MM_MSFT_SBPRO_WAVEIN 68 
#define MM_MSFT_SBPRO_WAVEOUT 69 
#define MM_MSFT_SBPRO_MIDIIN 70 
#define MM_MSFT_SBPRO_MIDIOUT 71 
#define MM_MSFT_SBPRO_SYNTH 72 
#define MM_MSFT_SBPRO_AUX_LINE 73 
#define MM_MSFT_SBPRO_AUX_CD 74 
#define MM_MSFT_SBPRO_MIXER 75 
#define MM_MSFT_MSOPL_SYNTH 76 
#define MM_CREATIVE_SB15_WAVEIN 1 
#define MM_CREATIVE_SB20_WAVEIN 2
#define MM_CREATIVE_SBPRO_WAVEIN 3
#define MM_CREATIVE_SBP16_WAVEIN 4
#define MM_CREATIVE_SB15_WAVEOUT 101
#define MM_CREATIVE_SB20_WAVEOUT 102
#define MM_CREATIVE_SBPRO_WAVEOUT 103
#define MM_CREATIVE_SBP16_WAVEOUT 104
#define MM_CREATIVE_MIDIOUT 201 
#define MM_CREATIVE_MIDIIN 202 
#define MM_CREATIVE_FMSYNTH_MONO 301 
#define MM_CREATIVE_FMSYNTH_STEREO 302 
#define MM_CREATIVE_MIDI_AWE32 303
#define MM_CREATIVE_AUX_CD 401 
#define MM_CREATIVE_AUX_LINE 402 
#define MM_CREATIVE_AUX_MIC 403 
#define MM_CREATIVE_AUX_MASTER 404
#define MM_CREATIVE_AUX_PCSPK 405
#define MM_CREATIVE_AUX_WAVE 406
#define MM_CREATIVE_AUX_MIDI 407
#define MM_CREATIVE_SBPRO_MIXER 408
#define MM_CREATIVE_SB16_MIXER 409
#define MM_MEDIAVISION_PROAUDIO 0x10
#define MM_PROAUD_MIDIOUT (MM_MEDIAVISION_PROAUDIO+1)
#define MM_PROAUD_MIDIIN (MM_MEDIAVISION_PROAUDIO+2)
#define MM_PROAUD_SYNTH (MM_MEDIAVISION_PROAUDIO+3)
#define MM_PROAUD_WAVEOUT (MM_MEDIAVISION_PROAUDIO+4)
#define MM_PROAUD_WAVEIN (MM_MEDIAVISION_PROAUDIO+5)
#define MM_PROAUD_MIXER (MM_MEDIAVISION_PROAUDIO+6)
#define MM_PROAUD_AUX (MM_MEDIAVISION_PROAUDIO+7)
#define MM_MEDIAVISION_THUNDER 32
#define MM_THUNDER_SYNTH (MM_MEDIAVISION_THUNDER+3)
#define MM_THUNDER_WAVEOUT (MM_MEDIAVISION_THUNDER+4)
#define MM_THUNDER_WAVEIN (MM_MEDIAVISION_THUNDER+5)
#define MM_THUNDER_AUX (MM_MEDIAVISION_THUNDER+7)
#define MM_MEDIAVISION_TPORT 0x40
#define MM_TPORT_WAVEOUT (MM_MEDIAVISION_TPORT+1)
#define MM_TPORT_WAVEIN (MM_MEDIAVISION_TPORT+2)
#define MM_TPORT_SYNTH (MM_MEDIAVISION_TPORT+3)
#define MM_MEDIAVISION_PROAUDIO_PLUS 0x50
#define MM_PROAUD_PLUS_MIDIOUT (MM_MEDIAVISION_PROAUDIO_PLUS+1)
#define MM_PROAUD_PLUS_MIDIIN (MM_MEDIAVISION_PROAUDIO_PLUS+2)
#define MM_PROAUD_PLUS_SYNTH (MM_MEDIAVISION_PROAUDIO_PLUS+3)
#define MM_PROAUD_PLUS_WAVEOUT (MM_MEDIAVISION_PROAUDIO_PLUS+4)
#define MM_PROAUD_PLUS_WAVEIN (MM_MEDIAVISION_PROAUDIO_PLUS+5)
#define MM_PROAUD_PLUS_MIXER (MM_MEDIAVISION_PROAUDIO_PLUS+6)
#define MM_PROAUD_PLUS_AUX (MM_MEDIAVISION_PROAUDIO_PLUS+7)
#define MM_MEDIAVISION_PROAUDIO_16 0x60
#define MM_PROAUD_16_MIDIOUT (MM_MEDIAVISION_PROAUDIO_16+1)
#define MM_PROAUD_16_MIDIIN (MM_MEDIAVISION_PROAUDIO_16+2)
#define MM_PROAUD_16_SYNTH (MM_MEDIAVISION_PROAUDIO_16+3)
#define MM_PROAUD_16_WAVEOUT (MM_MEDIAVISION_PROAUDIO_16+4)
#define MM_PROAUD_16_WAVEIN (MM_MEDIAVISION_PROAUDIO_16+5)
#define MM_PROAUD_16_MIXER (MM_MEDIAVISION_PROAUDIO_16+6)
#define MM_PROAUD_16_AUX (MM_MEDIAVISION_PROAUDIO_16+7)
#define MM_MEDIAVISION_PROSTUDIO_16 0x60
#define MM_STUDIO_16_MIDIOUT (MM_MEDIAVISION_PROSTUDIO_16+1)
#define MM_STUDIO_16_MIDIIN (MM_MEDIAVISION_PROSTUDIO_16+2)
#define MM_STUDIO_16_SYNTH (MM_MEDIAVISION_PROSTUDIO_16+3)
#define MM_STUDIO_16_WAVEOUT (MM_MEDIAVISION_PROSTUDIO_16+4)
#define MM_STUDIO_16_WAVEIN (MM_MEDIAVISION_PROSTUDIO_16+5)
#define MM_STUDIO_16_MIXER (MM_MEDIAVISION_PROSTUDIO_16+6)
#define MM_STUDIO_16_AUX (MM_MEDIAVISION_PROSTUDIO_16+7)
#define MM_MEDIAVISION_CDPC 0x70
#define MM_CDPC_MIDIOUT (MM_MEDIAVISION_CDPC+1)
#define MM_CDPC_MIDIIN (MM_MEDIAVISION_CDPC+2)
#define MM_CDPC_SYNTH (MM_MEDIAVISION_CDPC+3)
#define MM_CDPC_WAVEOUT (MM_MEDIAVISION_CDPC+4)
#define MM_CDPC_WAVEIN (MM_MEDIAVISION_CDPC+5)
#define MM_CDPC_MIXER (MM_MEDIAVISION_CDPC+6)
#define MM_CDPC_AUX (MM_MEDIAVISION_CDPC+7)
#define MM_MEDIAVISION_OPUS1208 0x80
#define MM_OPUS401_MIDIOUT (MM_MEDIAVISION_OPUS1208+1)
#define MM_OPUS401_MIDIIN (MM_MEDIAVISION_OPUS1208+2)
#define MM_OPUS1208_SYNTH (MM_MEDIAVISION_OPUS1208+3)
#define MM_OPUS1208_WAVEOUT (MM_MEDIAVISION_OPUS1208+4)
#define MM_OPUS1208_WAVEIN (MM_MEDIAVISION_OPUS1208+5)
#define MM_OPUS1208_MIXER (MM_MEDIAVISION_OPUS1208+6)
#define MM_OPUS1208_AUX (MM_MEDIAVISION_OPUS1208+7)
#define MM_MEDIAVISION_OPUS1216 0x90
#define MM_OPUS1216_MIDIOUT (MM_MEDIAVISION_OPUS1216+1)
#define MM_OPUS1216_MIDIIN (MM_MEDIAVISION_OPUS1216+2)
#define MM_OPUS1216_SYNTH (MM_MEDIAVISION_OPUS1216+3)
#define MM_OPUS1216_WAVEOUT (MM_MEDIAVISION_OPUS1216+4)
#define MM_OPUS1216_WAVEIN (MM_MEDIAVISION_OPUS1216+5)
#define MM_OPUS1216_MIXER (MM_MEDIAVISION_OPUS1216+6)
#define MM_OPUS1216_AUX (MM_MEDIAVISION_OPUS1216+7)
#define MM_ARTISOFT_SBWAVEIN 1 
#define MM_ARTISOFT_SBWAVEOUT 2 
#define MM_MMOTION_WAVEAUX 1 
#define MM_MMOTION_WAVEOUT 2 
#define MM_MMOTION_WAVEIN 3 
#define MM_IBM_PCMCIA_WAVEIN 11 
#define MM_IBM_PCMCIA_WAVEOUT 12 
#define MM_IBM_PCMCIA_SYNTH 13 
#define MM_IBM_PCMCIA_MIDIIN 14 
#define MM_IBM_PCMCIA_MIDIOUT 15 
#define MM_IBM_PCMCIA_AUX 16 
#define MM_VOCALTEC_WAVEOUT 1
#define MM_VOCALTEC_WAVEIN 2
#define MM_ROLAND_MPU401_MIDIOUT 15
#define MM_ROLAND_MPU401_MIDIIN 16
#define MM_ROLAND_SMPU_MIDIOUTA 17
#define MM_ROLAND_SMPU_MIDIOUTB 18
#define MM_ROLAND_SMPU_MIDIINA 19
#define MM_ROLAND_SMPU_MIDIINB 20
#define MM_ROLAND_SC7_MIDIOUT 21
#define MM_ROLAND_SC7_MIDIIN 22
#define MM_ROLAND_SERIAL_MIDIOUT 23
#define MM_ROLAND_SERIAL_MIDIIN 24
#define MM_DSP_SOLUTIONS_WAVEOUT 1
#define MM_DSP_SOLUTIONS_WAVEIN 2
#define MM_DSP_SOLUTIONS_SYNTH 3
#define MM_DSP_SOLUTIONS_AUX 4
#define MM_WANGLABS_WAVEIN1 1 
#define MM_WANGLABS_WAVEOUT1 2
#define MM_TANDY_VISWAVEIN 1
#define MM_TANDY_VISWAVEOUT 2
#define MM_TANDY_VISBIOSSYNTH 3
#define MM_TANDY_SENS_MMAWAVEIN 4
#define MM_TANDY_SENS_MMAWAVEOUT 5
#define MM_TANDY_SENS_MMAMIDIIN 6
#define MM_TANDY_SENS_MMAMIDIOUT 7
#define MM_TANDY_SENS_VISWAVEOUT 8
#define MM_TANDY_PSSJWAVEIN 9
#define MM_TANDY_PSSJWAVEOUT 10
#define MM_INTELOPD_WAVEIN 1 
#define MM_INTELOPD_WAVEOUT 101 
#define MM_INTELOPD_AUX 401 
#define MM_INTERACTIVE_WAVEIN 0x45
#define MM_INTERACTIVE_WAVEOUT 0x45
#define MM_YAMAHA_GSS_SYNTH 0x01
#define MM_YAMAHA_GSS_WAVEOUT 0x02
#define MM_YAMAHA_GSS_WAVEIN 0x03
#define MM_YAMAHA_GSS_MIDIOUT 0x04
#define MM_YAMAHA_GSS_MIDIIN 0x05
#define MM_YAMAHA_GSS_AUX 0x06
#define MM_EVEREX_CARRIER 0x01
#define MM_ECHO_SYNTH 0x01
#define MM_ECHO_WAVEOUT 0x02
#define MM_ECHO_WAVEIN 0x03
#define MM_ECHO_MIDIOUT 0x04
#define MM_ECHO_MIDIIN 0x05
#define MM_ECHO_AUX 0x06
#define MM_SIERRA_ARIA_MIDIOUT 0x14
#define MM_SIERRA_ARIA_MIDIIN 0x15
#define MM_SIERRA_ARIA_SYNTH 0x16
#define MM_SIERRA_ARIA_WAVEOUT 0x17
#define MM_SIERRA_ARIA_WAVEIN 0x18
#define MM_SIERRA_ARIA_AUX 0x19
#define MM_SIERRA_ARIA_AUX2 32
#define MM_CAT_WAVEOUT 1
#define MM_DSP_GROUP_TRUESPEECH 0x01
#define MM_MELABS_MIDI2GO 0x01
#define MM_ESS_AMWAVEOUT 0x01
#define MM_ESS_AMWAVEIN 0x02
#define MM_ESS_AMAUX 0x03
#define MM_ESS_AMSYNTH 0x04
#define MM_ESS_AMMIDIOUT 0x05
#define MM_ESS_AMMIDIIN 0x06
#define MM_ESS_MIXER 0x07
#define MM_ESS_AUX_CD 0x08
#define MM_ESS_MPU401_MIDIOUT 0x09
#define MM_ESS_MPU401_MIDIIN 0x0A
#define MM_ESS_ES488_WAVEOUT 0x10
#define MM_ESS_ES488_WAVEIN 0x11
#define MM_ESS_ES488_MIXER 0x12
#define MM_ESS_ES688_WAVEOUT 0x13
#define MM_ESS_ES688_WAVEIN 0x14
#define MM_ESS_ES688_MIXER 0x15
#define MM_ESS_ES1488_WAVEOUT 0x16
#define MM_ESS_ES1488_WAVEIN 0x17
#define MM_ESS_ES1488_MIXER 0x18
#define MM_ESS_ES1688_WAVEOUT 0x19
#define MM_ESS_ES1688_WAVEIN 0x1A
#define MM_ESS_ES1688_MIXER 0x1B
#define MM_EPS_FMSND 1
#define MM_TRUEVISION_WAVEIN1 1
#define MM_TRUEVISION_WAVEOUT1 2
#define MM_AZTECH_MIDIOUT 3
#define MM_AZTECH_MIDIIN 4
#define MM_AZTECH_WAVEIN 17
#define MM_AZTECH_WAVEOUT 18
#define MM_AZTECH_FMSYNTH 20
#define MM_AZTECH_MIXER 21
#define MM_AZTECH_PRO16_WAVEIN 33
#define MM_AZTECH_PRO16_WAVEOUT 34
#define MM_AZTECH_PRO16_FMSYNTH 38
#define MM_AZTECH_DSP16_WAVEIN 65
#define MM_AZTECH_DSP16_WAVEOUT 66
#define MM_AZTECH_DSP16_FMSYNTH 68
#define MM_AZTECH_DSP16_WAVESYNTH 70
#define MM_AZTECH_AUX_CD 401
#define MM_AZTECH_AUX_LINE 402
#define MM_AZTECH_AUX_MIC 403
#define MM_AZTECH_AUX 404
#define MM_AZTECH_NOVA16_WAVEIN 71
#define MM_AZTECH_NOVA16_WAVEOUT 72
#define MM_AZTECH_NOVA16_MIXER 73
#define MM_AZTECH_WASH16_WAVEIN 74
#define MM_AZTECH_WASH16_WAVEOUT 75
#define MM_AZTECH_WASH16_MIXER 76
#define MM_VIDEOLOGIC_MSWAVEIN 1
#define MM_VIDEOLOGIC_MSWAVEOUT 2
#define MM_KORG_PCIF_MIDIOUT 1
#define MM_KORG_PCIF_MIDIIN 2
#define MM_APT_ACE100CD 1
#define MM_ICS_WAVEDECK_WAVEOUT 1 
#define MM_ICS_WAVEDECK_WAVEIN 2
#define MM_ICS_WAVEDECK_MIXER 3
#define MM_ICS_WAVEDECK_AUX 4
#define MM_ICS_WAVEDECK_SYNTH 5
#define MM_ITERATEDSYS_FUFCODEC 1
#define MM_METHEUS_ZIPPER 1
#define MM_WINNOV_CAVIAR_WAVEIN 1
#define MM_WINNOV_CAVIAR_WAVEOUT 2
#define MM_WINNOV_CAVIAR_VIDC 3
#define MM_WINNOV_CAVIAR_CHAMPAGNE 4 
#define MM_WINNOV_CAVIAR_YUV8 5 
#define MM_NCR_BA_WAVEIN 1
#define MM_NCR_BA_WAVEOUT 2
#define MM_NCR_BA_SYNTH 3
#define MM_NCR_BA_AUX 4
#define MM_NCR_BA_MIXER 5
#define MM_VITEC_VMAKER 1
#define MM_VITEC_VMPRO 2
#define MM_MOSCOM_VPC2400 1 
#define MM_SILICONSOFT_SC1_WAVEIN 1 
#define MM_SILICONSOFT_SC1_WAVEOUT 2 
#define MM_SILICONSOFT_SC2_WAVEIN 3 
#define MM_SILICONSOFT_SC2_WAVEOUT 4 
#define MM_SILICONSOFT_SOUNDJR2_WAVEOUT 5 
#define MM_SILICONSOFT_SOUNDJR2PR_WAVEIN 6 
#define MM_SILICONSOFT_SOUNDJR2PR_WAVEOUT 7 
#define MM_SILICONSOFT_SOUNDJR3_WAVEOUT 8 
#define MM_OLIVETTI_WAVEIN 1
#define MM_OLIVETTI_WAVEOUT 2
#define MM_OLIVETTI_MIXER 3
#define MM_OLIVETTI_AUX 4
#define MM_OLIVETTI_MIDIIN 5
#define MM_OLIVETTI_MIDIOUT 6
#define MM_OLIVETTI_SYNTH 7
#define MM_OLIVETTI_JOYSTICK 8
#define MM_OLIVETTI_ACM_GSM 9
#define MM_OLIVETTI_ACM_ADPCM 10
#define MM_OLIVETTI_ACM_CELP 11
#define MM_OLIVETTI_ACM_SBC 12
#define MM_OLIVETTI_ACM_OPR 13
#define MM_IOMAGIC_TEMPO_WAVEOUT 1
#define MM_IOMAGIC_TEMPO_WAVEIN 2
#define MM_IOMAGIC_TEMPO_SYNTH 3
#define MM_IOMAGIC_TEMPO_MIDIOUT 4
#define MM_IOMAGIC_TEMPO_MXDOUT 5
#define MM_IOMAGIC_TEMPO_AUXOUT 6
#define MM_MATSUSHITA_WAVEIN 1
#define MM_MATSUSHITA_WAVEOUT 2
#define MM_MATSUSHITA_FMSYNTH_STEREO 3
#define MM_MATSUSHITA_MIXER 4
#define MM_MATSUSHITA_AUX 5
#define MM_NEWMEDIA_WAVJAMMER 1 
#define MM_LYRRUS_BRIDGE_GUITAR 1
#define MM_OPTI_M16_FMSYNTH_STEREO 0x01
#define MM_OPTI_M16_MIDIIN 0x02
#define MM_OPTI_M16_MIDIOUT 0x03
#define MM_OPTI_M16_WAVEIN 0x04
#define MM_OPTI_M16_WAVEOUT 0x05
#define MM_OPTI_M16_MIXER 0x06
#define MM_OPTI_M16_AUX 0x07
#define MM_OPTI_P16_FMSYNTH_STEREO 0x010
#define MM_OPTI_P16_MIDIIN 0x011
#define MM_OPTI_P16_MIDIOUT 0x012
#define MM_OPTI_P16_WAVEIN 0x013
#define MM_OPTI_P16_WAVEOUT 0x014
#define MM_OPTI_P16_MIXER 0x015
#define MM_OPTI_P16_AUX 0x016
#define MM_OPTI_M32_WAVEIN 0x020
#define MM_OPTI_M32_WAVEOUT 0x021
#define MM_OPTI_M32_MIDIIN 0x022
#define MM_OPTI_M32_MIDIOUT 0x023
#define MM_OPTI_M32_SYNTH_STEREO 0x024
#define MM_OPTI_M32_MIXER 0x025
#define MM_OPTI_M32_AUX 0x026
#endif 
#define RIFFINFO_IARL mmioFOURCC ('I', 'A', 'R', 'L') 
#define RIFFINFO_IART mmioFOURCC ('I', 'A', 'R', 'T') 
#define RIFFINFO_ICMS mmioFOURCC ('I', 'C', 'M', 'S') 
#define RIFFINFO_ICMT mmioFOURCC ('I', 'C', 'M', 'T') 
#define RIFFINFO_ICOP mmioFOURCC ('I', 'C', 'O', 'P') 
#define RIFFINFO_ICRD mmioFOURCC ('I', 'C', 'R', 'D') 
#define RIFFINFO_ICRP mmioFOURCC ('I', 'C', 'R', 'P') 
#define RIFFINFO_IDIM mmioFOURCC ('I', 'D', 'I', 'M') 
#define RIFFINFO_IDPI mmioFOURCC ('I', 'D', 'P', 'I') 
#define RIFFINFO_IENG mmioFOURCC ('I', 'E', 'N', 'G') 
#define RIFFINFO_IGNR mmioFOURCC ('I', 'G', 'N', 'R') 
#define RIFFINFO_IKEY mmioFOURCC ('I', 'K', 'E', 'Y') 
#define RIFFINFO_ILGT mmioFOURCC ('I', 'L', 'G', 'T') 
#define RIFFINFO_IMED mmioFOURCC ('I', 'M', 'E', 'D') 
#define RIFFINFO_INAM mmioFOURCC ('I', 'N', 'A', 'M') 
#define RIFFINFO_IPLT mmioFOURCC ('I', 'P', 'L', 'T') 
#define RIFFINFO_IPRD mmioFOURCC ('I', 'P', 'R', 'D') 
#define RIFFINFO_ISBJ mmioFOURCC ('I', 'S', 'B', 'J') 
#define RIFFINFO_ISFT mmioFOURCC ('I', 'S', 'F', 'T') 
#define RIFFINFO_ISHP mmioFOURCC ('I', 'S', 'H', 'P') 
#define RIFFINFO_ISRC mmioFOURCC ('I', 'S', 'R', 'C') 
#define RIFFINFO_ISRF mmioFOURCC ('I', 'S', 'R', 'F') 
#define RIFFINFO_ITCH mmioFOURCC ('I', 'T', 'C', 'H') 
#define RIFFINFO_ISMP mmioFOURCC ('I', 'S', 'M', 'P') 
#define RIFFINFO_IDIT mmioFOURCC ('I', 'D', 'I', 'T') 
#ifndef NONEWWAVE
#define WAVE_FORMAT_UNKNOWN 0 
#define WAVE_FORMAT_ADPCM 2 
#define WAVE_FORMAT_IBM_CVSD 5 
#define WAVE_FORMAT_ALAW 6 
#define WAVE_FORMAT_MULAW 7 
#define WAVE_FORMAT_OKI_ADPCM 0x10 
#define WAVE_FORMAT_DVI_ADPCM 0x11 
#define WAVE_FORMAT_IMA_ADPCM (WAVE_FORMAT_DVI_ADPCM) 
#define WAVE_FORMAT_MEDIASPACE_ADPCM 0x12 
#define WAVE_FORMAT_SIERRA_ADPCM 0x13 
#define WAVE_FORMAT_G723_ADPCM 0x14 
#define WAVE_FORMAT_DIGISTD 0x15 
#define WAVE_FORMAT_DIGIFIX 0x16 
#define WAVE_FORMAT_DIALOGIC_OKI_ADPCM 0x17 
#define WAVE_FORMAT_YAMAHA_ADPCM 0x20 
#define WAVE_FORMAT_SONARC 0x21 
#define WAVE_FORMAT_DSPGROUP_TRUESPEECH 0x22 
#define WAVE_FORMAT_ECHOSC1 0x23 
#define WAVE_FORMAT_AUDIOFILE_AF36 0x24 
#define WAVE_FORMAT_APTX 0x25 
#define WAVE_FORMAT_AUDIOFILE_AF10 0x26 
#define WAVE_FORMAT_DOLBY_AC2 0x030 
#define WAVE_FORMAT_GSM610 0x031 
#define WAVE_FORMAT_ANTEX_ADPCME 0x033 
#define WAVE_FORMAT_CONTROL_RES_VQLPC 0x034 
#define WAVE_FORMAT_DIGIREAL 0x035 
#define WAVE_FORMAT_DIGIADPCM 0x036 
#define WAVE_FORMAT_CONTROL_RES_CR10 0x037 
#define WAVE_FORMAT_NMS_VBXADPCM 0x038 
#define WAVE_FORMAT_CS_IMAADPCM 0x039 
#define WAVE_FORMAT_G721_ADPCM 0x040 
#define WAVE_FORMAT_MPEG 0x050 
#define WAVE_FORMAT_CREATIVE_ADPCM 0x0200 
#define WAVE_FORMAT_CREATIVE_FASTSPEECH8 0x0202 
#define WAVE_FORMAT_CREATIVE_FASTSPEECH10 0x0203 
#define WAVE_FORMAT_FM_TOWNS_SND 0x0300 
#define WAVE_FORMAT_OLIGSM 0x1000 
#define WAVE_FORMAT_OLIADPCM 0x1001 
#define WAVE_FORMAT_OLICELP 0x1002 
#define WAVE_FORMAT_OLISBC 0x1003 
#define WAVE_FORMAT_OLIOPR 0x1004 
#define WAVE_FORMAT_DEVELOPMENT (0xFFFF)
#endif 
#ifndef WAVE_FORMAT_PCM
typedef struct waveformat_tag {
	WORD wFormatTag; 
	WORD nChannels; 
	DWORD nSamplesPerSec; 
	DWORD nAvgBytesPerSec; 
	WORD nBlockAlign; 
} WAVEFORMAT;
typedef WAVEFORMAT *PWAVEFORMAT;
typedef WAVEFORMAT NEAR *NPWAVEFORMAT;
typedef WAVEFORMAT FAR *LPWAVEFORMAT;
#define WAVE_FORMAT_PCM 1
typedef struct pcmwaveformat_tag {
	WAVEFORMAT wf;
	WORD wBitsPerSample;
} PCMWAVEFORMAT;
typedef PCMWAVEFORMAT *PPCMWAVEFORMAT;
typedef PCMWAVEFORMAT NEAR *NPPCMWAVEFORMAT;
typedef PCMWAVEFORMAT FAR *LPPCMWAVEFORMAT;
#endif 
#ifndef _WAVEFORMATEX_
#define _WAVEFORMATEX_
typedef struct tWAVEFORMATEX
{
	WORD wFormatTag; 
	WORD nChannels; 
	DWORD nSamplesPerSec; 
	DWORD nAvgBytesPerSec; 
	WORD nBlockAlign; 
	WORD wBitsPerSample; 
	WORD cbSize;
} WAVEFORMATEX;
typedef WAVEFORMATEX *PWAVEFORMATEX;
typedef WAVEFORMATEX NEAR *NPWAVEFORMATEX;
typedef WAVEFORMATEX FAR *LPWAVEFORMATEX;
#endif 
#ifndef NONEWWAVE
typedef struct adpcmcoef_tag {
	short iCoef1;
	short iCoef2;
} ADPCMCOEFSET;
typedef ADPCMCOEFSET *PADPCMCOEFSET;
typedef ADPCMCOEFSET NEAR *NPADPCMCOEFSET;
typedef ADPCMCOEFSET FAR *LPADPCMCOEFSET;
typedef struct adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wSamplesPerBlock;
	WORD wNumCoef;
	ADPCMCOEFSET aCoef[1];
} ADPCMWAVEFORMAT;
typedef ADPCMWAVEFORMAT *PADPCMWAVEFORMAT;
typedef ADPCMWAVEFORMAT NEAR *NPADPCMWAVEFORMAT;
typedef ADPCMWAVEFORMAT FAR *LPADPCMWAVEFORMAT;
typedef struct dvi_adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wSamplesPerBlock;
} DVIADPCMWAVEFORMAT;
typedef DVIADPCMWAVEFORMAT *PDVIADPCMWAVEFORMAT;
typedef DVIADPCMWAVEFORMAT NEAR *NPDVIADPCMWAVEFORMAT;
typedef DVIADPCMWAVEFORMAT FAR *LPDVIADPCMWAVEFORMAT;
typedef struct ima_adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wSamplesPerBlock;
} IMAADPCMWAVEFORMAT;
typedef IMAADPCMWAVEFORMAT *PIMAADPCMWAVEFORMAT;
typedef IMAADPCMWAVEFORMAT NEAR *NPIMAADPCMWAVEFORMAT;
typedef IMAADPCMWAVEFORMAT FAR *LPIMAADPCMWAVEFORMAT;
typedef struct mediaspace_adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wRevision;
} MEDIASPACEADPCMWAVEFORMAT;
typedef MEDIASPACEADPCMWAVEFORMAT *PMEDIASPACEADPCMWAVEFORMAT;
typedef MEDIASPACEADPCMWAVEFORMAT NEAR *NPMEDIASPACEADPCMWAVEFORMAT;
typedef MEDIASPACEADPCMWAVEFORMAT FAR *LPMEDIASPACEADPCMWAVEFORMAT;
typedef struct sierra_adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wRevision;
} SIERRAADPCMWAVEFORMAT;
typedef SIERRAADPCMWAVEFORMAT *PSIERRAADPCMWAVEFORMAT;
typedef SIERRAADPCMWAVEFORMAT *NPSIERRAADPCMWAVEFORMAT;
typedef SIERRAADPCMWAVEFORMAT *LPSIERRAADPCMWAVEFORMAT;
typedef struct g723_adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD cbExtraSize;
	WORD nAuxBlockSize;
} G723_ADPCMWAVEFORMAT;
typedef G723_ADPCMWAVEFORMAT *PG723_ADPCMWAVEFORMAT;
typedef G723_ADPCMWAVEFORMAT NEAR *NPG723_ADPCMWAVEFORMAT;
typedef G723_ADPCMWAVEFORMAT FAR *LPG723_ADPCMWAVEFORMAT;
typedef struct digistdwaveformat_tag {
	WAVEFORMATEX wfx;
} DIGISTDWAVEFORMAT;
typedef DIGISTDWAVEFORMAT *PDIGISTDWAVEFORMAT;
typedef DIGISTDWAVEFORMAT NEAR *NPDIGISTDWAVEFORMAT;
typedef DIGISTDWAVEFORMAT FAR *LPDIGISTDWAVEFORMAT;
typedef struct digifixwaveformat_tag {
	WAVEFORMATEX wfx;
} DIGIFIXWAVEFORMAT;
typedef DIGIFIXWAVEFORMAT *PDIGIFIXWAVEFORMAT;
typedef DIGIFIXWAVEFORMAT NEAR *NPDIGIFIXWAVEFORMAT;
typedef DIGIFIXWAVEFORMAT FAR *LPDIGIFIXWAVEFORMAT;
typedef struct creative_fastspeechformat_tag{
	WAVEFORMATEX ewf;
}DIALOGICOKIADPCMWAVEFORMAT;
typedef DIALOGICOKIADPCMWAVEFORMAT *PDIALOGICOKIADPCMWAVEFORMAT;
typedef DIALOGICOKIADPCMWAVEFORMAT NEAR *NPDIALOGICOKIADPCMWAVEFORMAT;
typedef DIALOGICOKIADPCMWAVEFORMAT FAR *LPDIALOGICOKIADPCMWAVEFORMAT;
typedef struct yamaha_adpmcwaveformat_tag { WAVEFORMATEX wfx;} YAMAHA_ADPCMWAVEFORMAT;
typedef YAMAHA_ADPCMWAVEFORMAT *PYAMAHA_ADPCMWAVEFORMAT;
typedef YAMAHA_ADPCMWAVEFORMAT NEAR *NPYAMAHA_ADPCMWAVEFORMAT;
typedef YAMAHA_ADPCMWAVEFORMAT FAR *LPYAMAHA_ADPCMWAVEFORMAT;
typedef struct sonarcwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wCompType;
} SONARCWAVEFORMAT;
typedef SONARCWAVEFORMAT *PSONARCWAVEFORMAT;
typedef SONARCWAVEFORMAT NEAR *NPSONARCWAVEFORMAT;
typedef SONARCWAVEFORMAT FAR *LPSONARCWAVEFORMAT;
typedef struct truespeechwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wRevision;
	WORD nSamplesPerBlock;
	BYTE abReserved[28];
} TRUESPEECHWAVEFORMAT;
typedef TRUESPEECHWAVEFORMAT *PTRUESPEECHWAVEFORMAT;
typedef TRUESPEECHWAVEFORMAT NEAR *NPTRUESPEECHWAVEFORMAT;
typedef TRUESPEECHWAVEFORMAT FAR *LPTRUESPEECHWAVEFORMAT;
typedef struct echosc1waveformat_tag {
	WAVEFORMATEX wfx;
} ECHOSC1WAVEFORMAT;
typedef ECHOSC1WAVEFORMAT *PECHOSC1WAVEFORMAT;
typedef ECHOSC1WAVEFORMAT NEAR *NPECHOSC1WAVEFORMAT;
typedef ECHOSC1WAVEFORMAT FAR *LPECHOSC1WAVEFORMAT;
typedef struct audiofile_af36waveformat_tag { WAVEFORMATEX wfx; } AUDIOFILE_AF36WAVEFORMAT;
typedef AUDIOFILE_AF36WAVEFORMAT *PAUDIOFILE_AF36WAVEFORMAT;
typedef AUDIOFILE_AF36WAVEFORMAT NEAR *NPAUDIOFILE_AF36WAVEFORMAT;
typedef AUDIOFILE_AF36WAVEFORMAT FAR *LPAUDIOFILE_AF36WAVEFORMAT;
typedef struct aptxwaveformat_tag {
	WAVEFORMATEX wfx;
} APTXWAVEFORMAT;
typedef APTXWAVEFORMAT *PAPTXWAVEFORMAT;
typedef APTXWAVEFORMAT NEAR *NPAPTXWAVEFORMAT;
typedef APTXWAVEFORMAT FAR *LPAPTXWAVEFORMAT;
typedef struct audiofile_af10waveformat_tag {
	WAVEFORMATEX wfx;
} AUDIOFILE_AF10WAVEFORMAT;
typedef AUDIOFILE_AF10WAVEFORMAT *PAUDIOFILE_AF10WAVEFORMAT;
typedef AUDIOFILE_AF10WAVEFORMAT NEAR *NPAUDIOFILE_AF10WAVEFORMAT;
typedef AUDIOFILE_AF10WAVEFORMAT FAR *LPAUDIOFILE_AF10WAVEFORMAT;
typedef struct dolbyac2waveformat_tag {
	WAVEFORMATEX wfx;
	WORD nAuxBitsCode;
} DOLBYAC2WAVEFORMAT;
typedef struct gsm610waveformat_tag {
WAVEFORMATEX wfx;
WORD wSamplesPerBlock;
} GSM610WAVEFORMAT; 
typedef GSM610WAVEFORMAT *PGSM610WAVEFORMAT;
typedef GSM610WAVEFORMAT NEAR *NPGSM610WAVEFORMAT;
typedef GSM610WAVEFORMAT FAR *LPGSM610WAVEFORMAT;
typedef struct adpcmewaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wSamplesPerBlock;
} ADPCMEWAVEFORMAT;
typedef ADPCMEWAVEFORMAT *PADPCMEWAVEFORMAT;
typedef ADPCMEWAVEFORMAT NEAR *NPADPCMEWAVEFORMAT;
typedef ADPCMEWAVEFORMAT FAR *LPADPCMEWAVEFORMAT;
typedef struct contres_vqlpcwaveformat_tag {
WAVEFORMATEX wfx;
WORD wSamplesPerBlock;
} CONTRESVQLPCWAVEFORMAT; 
typedef CONTRESVQLPCWAVEFORMAT *PCONTRESVQLPCWAVEFORMAT;
typedef CONTRESVQLPCWAVEFORMAT NEAR *NPCONTRESVQLPCWAVEFORMAT;
typedef CONTRESVQLPCWAVEFORMAT FAR *LPCONTRESVQLPCWAVEFORMAT;
typedef struct digirealwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wSamplesPerBlock;
} DIGIREALWAVEFORMAT;
typedef DIGIREALWAVEFORMAT *PDIGIREALWAVEFORMAT;
typedef DIGIREALWAVEFORMAT NEAR *NPDIGIREALWAVEFORMAT;
typedef DIGIREALWAVEFORMAT FAR *LPDIGIREALWAVEFORMAT;
typedef struct digiadpcmmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wSamplesPerBlock;
} DIGIADPCMWAVEFORMAT;
typedef DIGIADPCMWAVEFORMAT *PDIGIADPCMWAVEFORMAT;
typedef DIGIADPCMWAVEFORMAT NEAR *NPDIGIADPCMWAVEFORMAT;
typedef DIGIADPCMWAVEFORMAT FAR *LPDIGIADPCMWAVEFORMAT;
typedef struct contres_cr10waveformat_tag {
WAVEFORMATEX wfx;
WORD wSamplesPerBlock;
} CONTRESCR10WAVEFORMAT; 
typedef CONTRESCR10WAVEFORMAT *PCONTRESCR10WAVEFORMAT;
typedef CONTRESCR10WAVEFORMAT NEAR *NPCONTRESCR10WAVEFORMAT;
typedef CONTRESCR10WAVEFORMAT FAR *LPCONTRESCR10WAVEFORMAT;
typedef struct nms_vbxadpcmmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wSamplesPerBlock;
} NMS_VBXADPCMWAVEFORMAT;
typedef NMS_VBXADPCMWAVEFORMAT *PNMS_VBXADPCMWAVEFORMAT;
typedef NMS_VBXADPCMWAVEFORMAT NEAR *NPNMS_VBXADPCMWAVEFORMAT;
typedef NMS_VBXADPCMWAVEFORMAT FAR *LPNMS_VBXADPCMWAVEFORMAT;
typedef struct g721_adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD nAuxBlockSize;
} G721_ADPCMWAVEFORMAT;
typedef G721_ADPCMWAVEFORMAT *PG721_ADPCMWAVEFORMAT;
typedef G721_ADPCMWAVEFORMAT NEAR *NPG721_ADPCMWAVEFORMAT;
typedef G721_ADPCMWAVEFORMAT FAR *LPG721_ADPCMWAVEFORMAT;
typedef struct mpeg1waveformat_tag {
	WAVEFORMATEX wfx;
	WORD fwHeadLayer;
	DWORD dwHeadBitrate;
	WORD fwHeadMode;
	WORD fwHeadModeExt;
	WORD wHeadEmphasis;
	WORD fwHeadFlags;
	DWORD dwPTSLow;
	DWORD dwPTSHigh;
} MPEG1WAVEFORMAT;
typedef MPEG1WAVEFORMAT *PMPEG1WAVEFORMAT;
typedef MPEG1WAVEFORMAT NEAR *NPMPEG1WAVEFORMAT;
typedef MPEG1WAVEFORMAT FAR *LPMPEG1WAVEFORMAT;
#define ACM_MPEG_LAYER1 (0x01)
#define ACM_MPEG_LAYER2 (0x02)
#define ACM_MPEG_LAYER3 (0x04)
#define ACM_MPEG_STEREO (0x01)
#define ACM_MPEG_JOINTSTEREO (0x02)
#define ACM_MPEG_DUALCHANNEL (0x04)
#define ACM_MPEG_SINGLECHANNEL (0x08)
#define ACM_MPEG_PRIVATEBIT (0x01)
#define ACM_MPEG_COPYRIGHT (0x02)
#define ACM_MPEG_ORIGINALHOME (0x04)
#define ACM_MPEG_PROTECTIONBIT (0x08)
#define ACM_MPEG_ID_MPEG1 (0x010)
typedef struct creative_adpcmwaveformat_tag {
	WAVEFORMATEX wfx;
	WORD wRevision;
} CREATIVEADPCMWAVEFORMAT;
typedef CREATIVEADPCMWAVEFORMAT *PCREATIVEADPCMWAVEFORMAT;
typedef CREATIVEADPCMWAVEFORMAT NEAR *NPCREATIVEADPCMWAVEFORMAT;
typedef CREATIVEADPCMWAVEFORMAT FAR *LPCREATIVEADPCMWAVEFORMAT;
typedef struct creative_fastspeech8format_tag {
	WAVEFORMATEX wfx;
	WORD wRevision;
} CREATIVEFASTSPEECH8WAVEFORMAT;
typedef CREATIVEFASTSPEECH8WAVEFORMAT *PCREATIVEFASTSPEECH8WAVEFORMAT;
typedef CREATIVEFASTSPEECH8WAVEFORMAT NEAR *NPCREATIVEFASTSPEECH8WAVEFORMAT;
typedef CREATIVEFASTSPEECH8WAVEFORMAT FAR *LPCREATIVEFASTSPEECH8WAVEFORMAT;
typedef struct creative_fastspeech10format_tag {
	WAVEFORMATEX wfx;
	WORD wRevision;
} CREATIVEFASTSPEECH10WAVEFORMAT;
typedef CREATIVEFASTSPEECH10WAVEFORMAT *PCREATIVEFASTSPEECH10WAVEFORMAT;
typedef CREATIVEFASTSPEECH10WAVEFORMAT *NPCREATIVEFASTSPEECH10WAVEFORMAT;
typedef CREATIVEFASTSPEECH10WAVEFORMAT *LPCREATIVEFASTSPEECH10WAVEFORMAT;
typedef struct fmtowns_snd_waveformat_tag {
	WAVEFORMATEX wfx;
	WORD wRevision;
} FMTOWNS_SND_WAVEFORMAT;
typedef FMTOWNS_SND_WAVEFORMAT *PFMTOWNS_SND_WAVEFORMAT;
typedef FMTOWNS_SND_WAVEFORMAT NEAR *NPFMTOWNS_SND_WAVEFORMAT;
typedef FMTOWNS_SND_WAVEFORMAT FAR *LPFMTOWNS_SND_WAVEFORMAT;
typedef struct oligsmwaveformat_tag {
	WAVEFORMATEX wfx;
} OLIGSMWAVEFORMAT;
typedef OLIGSMWAVEFORMAT *POLIGSMWAVEFORMAT;
typedef OLIGSMWAVEFORMAT NEAR *NPOLIGSMWAVEFORMAT;
typedef OLIGSMWAVEFORMAT FAR *LPOLIGSMWAVEFORMAT;
typedef struct oliadpcmwaveformat_tag {
	WAVEFORMATEX wfx;
} OLIADPCMWAVEFORMAT;
typedef OLIADPCMWAVEFORMAT *POLIADPCMWAVEFORMAT;
typedef OLIADPCMWAVEFORMAT NEAR *NPOLIADPCMWAVEFORMAT ;
typedef OLIADPCMWAVEFORMAT FAR *LPOLIADPCMWAVEFORMAT;
typedef struct olicelpwaveformat_tag {
	WAVEFORMATEX wfx;
} OLICELPWAVEFORMAT;
typedef OLICELPWAVEFORMAT *POLICELPWAVEFORMAT;
typedef OLICELPWAVEFORMAT NEAR *NPOLICELPWAVEFORMAT ;
typedef OLICELPWAVEFORMAT FAR *LPOLICELPWAVEFORMAT;
typedef struct olisbcwaveformat_tag {
	WAVEFORMATEX wfx;
} OLISBCWAVEFORMAT;
typedef OLISBCWAVEFORMAT *POLISBCWAVEFORMAT;
typedef OLISBCWAVEFORMAT NEAR *NPOLISBCWAVEFORMAT ;
typedef OLISBCWAVEFORMAT FAR *LPOLISBCWAVEFORMAT;
typedef struct olioprwaveformat_tag {
	WAVEFORMATEX wfx;
} OLIOPRWAVEFORMAT;
typedef OLIOPRWAVEFORMAT *POLIOPRWAVEFORMAT;
typedef OLIOPRWAVEFORMAT NEAR *NPOLIOPRWAVEFORMAT ;
typedef OLIOPRWAVEFORMAT FAR *LPOLIOPRWAVEFORMAT;
typedef struct csimaadpcmwaveformat_tag { WAVEFORMATEX wfx; } CSIMAADPCMWAVEFORMAT;
typedef CSIMAADPCMWAVEFORMAT *PCSIMAADPCMWAVEFORMAT;
typedef CSIMAADPCMWAVEFORMAT NEAR *NPCSIMAADPCMWAVEFORMAT ;
typedef CSIMAADPCMWAVEFORMAT FAR *LPCSIMAADPCMWAVEFORMAT;
#ifndef _ACM_WAVEFILTER
#define _ACM_WAVEFILTER
#define WAVE_FILTER_UNKNOWN 0x0
#define WAVE_FILTER_DEVELOPMENT (0xFFFF)
typedef struct wavefilter_tag {
	DWORD cbStruct; 
	DWORD dwFilterTag; 
	DWORD fdwFilter; 
	DWORD dwReserved[5]; 
} WAVEFILTER;
typedef WAVEFILTER *PWAVEFILTER;
typedef WAVEFILTER NEAR *NPWAVEFILTER;
typedef WAVEFILTER FAR *LPWAVEFILTER;
#endif 
#ifndef WAVE_FILTER_VOLUME
#define WAVE_FILTER_VOLUME 0x01

typedef struct wavefilter_volume_tag {
	WAVEFILTER wfltr;
	DWORD dwVolume;
} VOLUMEWAVEFILTER;
typedef VOLUMEWAVEFILTER *PVOLUMEWAVEFILTER;
typedef VOLUMEWAVEFILTER NEAR *NPVOLUMEWAVEFILTER;
typedef VOLUMEWAVEFILTER FAR *LPVOLUMEWAVEFILTER;
#endif 
#ifndef WAVE_FILTER_ECHO
#define WAVE_FILTER_ECHO 0x02
typedef struct wavefilter_echo_tag {
	WAVEFILTER wfltr;
	DWORD dwVolume;
	DWORD dwDelay;
} ECHOWAVEFILTER;
typedef ECHOWAVEFILTER *PECHOWAVEFILTER;
typedef ECHOWAVEFILTER NEAR *NPECHOWAVEFILTER;
typedef ECHOWAVEFILTER FAR *LPECHOWAVEFILTER;
#endif 
#define RIFFWAVE_inst mmioFOURCC('i','n','s','t')
struct tag_s_RIFFWAVE_inst {
	BYTE bUnshiftedNote;
	char chFineTune;
	char chGain;
	BYTE bLowNote;
	BYTE bHighNote;
	BYTE bLowVelocity;
	BYTE bHighVelocity;
};
typedef struct tag_s_RIFFWAVE_INST s_RIFFWAVE_inst;
#endif
#ifndef NONEWRIFF
#define RIFFCPPO mmioFOURCC('C','P','P','O')
#define RIFFCPPO_objr mmioFOURCC('o','b','j','r')
#define RIFFCPPO_obji mmioFOURCC('o','b','j','i')
#define RIFFCPPO_clsr mmioFOURCC('c','l','s','r')
#define RIFFCPPO_clsi mmioFOURCC('c','l','s','i')
#define RIFFCPPO_mbr mmioFOURCC('m','b','r',' ')
#define RIFFCPPO_char mmioFOURCC('c','h','a','r')
#define RIFFCPPO_byte mmioFOURCC('b','y','t','e')
#define RIFFCPPO_int mmioFOURCC('i','n','t',' ')
#define RIFFCPPO_word mmioFOURCC('w','o','r','d')
#define RIFFCPPO_long mmioFOURCC('l','o','n','g')
#define RIFFCPPO_dwrd mmioFOURCC('d','w','r','d')
#define RIFFCPPO_flt mmioFOURCC('f','l','t',' ')
#define RIFFCPPO_dbl mmioFOURCC('d','b','l',' ')
#define RIFFCPPO_str mmioFOURCC('s','t','r',' ')
#endif
#ifndef BI_BITFIELDS
#define BI_BITFIELDS 3
#endif
#ifndef QUERYDIBSUPPORT
#define QUERYDIBSUPPORT 3073
#define QDI_SETDIBITS 0x01
#define QDI_GETDIBITS 0x02
#define QDI_DIBTOSCREEN 0x04
#define QDI_STRETCHDIB 0x08
#endif
#ifndef NOBITMAP
typedef struct tagEXBMINFOHEADER {
	BITMAPINFOHEADER bmi;
	DWORD biExtDataOffset;
} EXBMINFOHEADER;
#endif 
#define BICOMP_IBMULTIMOTION mmioFOURCC('U', 'L', 'T', 'I')
#define BICOMP_IBMPHOTOMOTION mmioFOURCC('P', 'H', 'M', 'O')
#define BICOMP_CREATIVEYUV mmioFOURCC('c', 'y', 'u', 'v')
#ifndef NOJPEGDIB
#define JPEG_DIB mmioFOURCC('J','P','E','G') 
#define MJPG_DIB mmioFOURCC('M','J','P','G') 
#define JPEG_PROCESS_BASELINE 0 
#define AVIIF_CONTROLFRAME 0x0200L 
#define JIFMK_SOF0 0xFFC0 
#define JIFMK_SOF1 0xFFC1 
#define JIFMK_SOF2 0xFFC2 
#define JIFMK_SOF3 0xFFC3 
#define JIFMK_SOF5 0xFFC5 
#define JIFMK_SOF6 0xFFC6 
#define JIFMK_SOF7 0xFFC7 
#define JIFMK_JPG 0xFFC8 
#define JIFMK_SOF9 0xFFC9 
#define JIFMK_SOF10 0xFFCA 
#define JIFMK_SOF11 0xFFCB 
#define JIFMK_SOF13 0xFFCD 
#define JIFMK_SOF14 0xFFCE 
#define JIFMK_SOF15 0xFFCF 
#define JIFMK_DHT 0xFFC4 
#define JIFMK_DAC 0xFFCC 
#define JIFMK_RST0 0xFFD0 
#define JIFMK_RST1 0xFFD1 
#define JIFMK_RST2 0xFFD2 
#define JIFMK_RST3 0xFFD3 
#define JIFMK_RST4 0xFFD4 
#define JIFMK_RST5 0xFFD5 
#define JIFMK_RST6 0xFFD6 
#define JIFMK_RST7 0xFFD7 
#define JIFMK_SOI 0xFFD8 
#define JIFMK_EOI 0xFFD9 
#define JIFMK_SOS 0xFFDA 
#define JIFMK_DQT 0xFFDB 
#define JIFMK_DNL 0xFFDC 
#define JIFMK_DRI 0xFFDD 
#define JIFMK_DHP 0xFFDE 
#define JIFMK_EXP 0xFFDF 
#define JIFMK_APP0 0xFFE0 
#define JIFMK_APP1 0xFFE1 
#define JIFMK_APP2 0xFFE2 
#define JIFMK_APP3 0xFFE3 
#define JIFMK_APP4 0xFFE4 
#define JIFMK_APP5 0xFFE5 
#define JIFMK_APP6 0xFFE6 
#define JIFMK_APP7 0xFFE7 
#define JIFMK_JPG0 0xFFF0 
#define JIFMK_JPG1 0xFFF1 
#define JIFMK_JPG2 0xFFF2 
#define JIFMK_JPG3 0xFFF3 
#define JIFMK_JPG4 0xFFF4 
#define JIFMK_JPG5 0xFFF5 
#define JIFMK_JPG6 0xFFF6 
#define JIFMK_JPG7 0xFFF7 
#define JIFMK_JPG8 0xFFF8 
#define JIFMK_JPG9 0xFFF9 
#define JIFMK_JPG10 0xFFFA 
#define JIFMK_JPG11 0xFFFB 
#define JIFMK_JPG12 0xFFFC 
#define JIFMK_JPG13 0xFFFD 
#define JIFMK_COM 0xFFFE 
#define JIFMK_TEM 0xFF01 
#define JIFMK_RES 0xFF02 
#define JIFMK_00 0xFF00 
#define JIFMK_FF 0xFFFF 
#define JPEG_Y 1 
#define JPEG_YCbCr 2 
#define JPEG_RGB 3 
typedef struct _JPEGINFOHEADER {
	DWORD JPEGSize;
	DWORD JPEGProcess;
	DWORD JPEGColorSpaceID;
	DWORD JPEGBitsPerSample;
	DWORD JPEGHSubSampling;
	DWORD JPEGVSubSampling;
} JPEGINFOHEADER;
#ifdef MJPGDHTSEG_STORAGE
MJPGHDTSEG_STORAGE BYTE MJPGDHTSeg[0x1A4] = {
0xFF,0xC4,0x01,0xA2,
0x0,0x00,0x01,0x05,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x01,0x0,0x03,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x0,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,
0x08,0x09,0x0A,0x0B,0x10,0x0,0x02,0x01,0x03,0x03,0x02,0x04,0x03,0x05,0x05,0x04,0x04,0x00,
0x0,0x01,0x7D,0x01,0x02,0x03,0x00,0x04,0x11,0x05,0x12,0x21,0x31,0x41,0x06,0x13,0x51,0x61,
0x07,0x22,0x71,0x14,0x32,0x81,0x91,0xA1,0x08,0x23,0x42,0xB1,0xC1,0x15,0x52,0xD1,0xF0,0x24,
0x33,0x62,0x72,0x82,0x09,0x0A,0x16,0x17,0x18,0x19,0x1A,0x25,0x26,0x27,0x28,0x29,0x2A,0x34,
0x35,0x36,0x37,0x38,0x39,0x3A,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x53,0x54,0x55,0x56,
0x57,0x58,0x59,0x5A,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x73,0x74,0x75,0x76,0x77,0x78,
0x79,0x7A,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,
0x9A,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,
0xBA,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,
0xDA,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,
0xF8,0xF9,0xFA,0x11,0x0,0x02,0x01,0x02,0x04,0x04,0x03,0x04,0x07,0x05,0x04,0x04,0x00,0x01,
0x02,0x77,0x0,0x01,0x02,0x03,0x11,0x04,0x05,0x21,0x31,0x06,0x12,0x41,0x51,0x07,0x61,0x71,
0x13,0x22,0x32,0x81,0x08,0x14,0x42,0x91,0xA1,0xB1,0xC1,0x09,0x23,0x33,0x52,0xF0,0x15,0x62,
0x72,0xD1,0x0A,0x16,0x24,0x34,0xE1,0x25,0xF1,0x17,0x18,0x19,0x1A,0x26,0x27,0x28,0x29,0x2A,
0x35,0x36,0x37,0x38,0x39,0x3A,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x53,0x54,0x55,0x56,
0x57,0x58,0x59,0x5A,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x73,0x74,0x75,0x76,0x77,0x78,
0x79,0x7A,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x92,0x93,0x94,0x95,0x96,0x97,0x98,
0x99,0x9A,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,
0xB9,0xBA,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,
0xD9,0xDA,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,
0xF9,0xFA
};
#endif
#endif
#ifndef NONEWIC
#ifndef ICTYPE_VIDEO
#define ICTYPE_VIDEO mmioFOURCC('v', 'i', 'd', 'c')
#define ICTYPE_AUDIO mmioFOURCC('a', 'u', 'd', 'c')
#endif
#endif
#define FOURCC_RDSP mmioFOURCC('R', 'D', 'S', 'P')
#ifndef MMNOMIXER
#define MIXERCONTROL_CONTROLTYPE_SRS_MTS (MIXERCONTROL_CONTROLTYPE_BOOLEAN + 6)
#define MIXERCONTROL_CONTROLTYPE_SRS_ONOFF (MIXERCONTROL_CONTROLTYPE_BOOLEAN + 7)
#define MIXERCONTROL_CONTROLTYPE_SRS_SYNTHSELECT (MIXERCONTROL_CONTROLTYPE_BOOLEAN + 8)
#endif

#ifndef RC_INVOKED
#pragma pack(pop) 
#endif 

#endif 

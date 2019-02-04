/* -*- c++ -*- */

#define DVBS2MOD_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "dvbs2mod_swig_doc.i"

%{
#include "dvbs2mod/dvb_config.h"
#include "dvbs2mod/dvbs2mod_modulator_bc.h"
#include "dvbs2mod/dvbs2mod_physical_cc.h"
%}


%include "dvbs2mod/dvb_config.h"
%include "dvbs2mod/dvbs2mod_modulator_bc.h"
GR_SWIG_BLOCK_MAGIC2(dvbs2mod, dvbs2mod_modulator_bc);
%include "dvbs2mod/dvbs2mod_physical_cc.h"
GR_SWIG_BLOCK_MAGIC2(dvbs2mod, dvbs2mod_physical_cc);

/* -*- c++ -*- */
/* 
 * Copyright 2019 Ron Economos.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_DVBS2MOD_DVBS2MOD_PHYSICAL_CC_H
#define INCLUDED_DVBS2MOD_DVBS2MOD_PHYSICAL_CC_H

#include <dvbs2mod/api.h>
#include <gnuradio/block.h>
#include <dvbs2mod/dvb_config.h>

namespace gr {
  namespace dvbs2mod {

    /*!
     * \brief <+description of block+>
     * \ingroup dvbs2mod
     *
     */
    class DVBS2MOD_API dvbs2mod_physical_cc : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<dvbs2mod_physical_cc> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of dvbs2mod::dvbs2mod_physical_cc.
       *
       * To avoid accidental use of raw pointers, dvbs2mod::dvbs2mod_physical_cc's
       * constructor is in a private implementation
       * class. dvbs2mod::dvbs2mod_physical_cc::make is the public interface for
       * creating new instances.
       */
      static sptr make(dvb_framesize_t framesize, dvb_code_rate_t rate, dvb_constellation_t constellation, dvb_pilots_t pilots, int goldcode, dvb_interpolation_t interpolation);
    };

  } // namespace dvbs2mod
} // namespace gr

#endif /* INCLUDED_DVBS2MOD_DVBS2MOD_PHYSICAL_CC_H */


// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef ECHOI_H_
#define ECHOI_H_

#include "EchoS.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

//Class GoodDay_i
class  GoodDay_i : public virtual POA_GoodDay
{
public:
  //Constructor 
  GoodDay_i (void);
  
  //Destructor 
  virtual ~GoodDay_i (void);
  
virtual char * hello_simple (
    
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual CORBA::WChar * hello_wide (
    const CORBA::WChar * msg
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test (
    
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException,
    GoodDay::WStringException
  ));

};


#endif /* ECHOI_H_  */

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

#include "Echo_i.h"

// Implementation skeleton constructor
GoodDay_i::GoodDay_i (void)
  {
  }
  
// Implementation skeleton destructor
GoodDay_i::~GoodDay_i (void)
  {
  }
  
char * GoodDay_i::hello_simple (
    
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))

  {
      return CORBA::string_dup("Hello Simple");
  }
  
CORBA::WChar * GoodDay_i::hello_wide (
    const CORBA::WChar * msg
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))

  {
      ACE_WString w1( CORBA::wstring_dup( msg ));
      cout << w1 << endl;
      ACE_WString w("aaaa");
      return CORBA::wstring_dup( w.c_str() );
  }
  
void GoodDay_i::test (
    
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException,
    GoodDay::WStringException
  ))

  {
      GoodDay::WStringException e;
      ACE_WString wwhy("WStringException test");
      e.why = CORBA::wstring_dup(wwhy.c_str());
      throw e;

  }
  





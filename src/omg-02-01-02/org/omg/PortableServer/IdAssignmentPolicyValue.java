/***** Copyright (c) 1999-2000 Object Management Group. Unlimited rights to 
       duplicate and use this code are hereby granted provided that this 
       copyright notice is included.
*****/

/***** This class is generated by an IDL compiler and is ORB-vendor specific. 
       A "dummy" implementation is provided so that the "official" org.omg.*
       packages may be compiled.  In order to actually use a Java ORB,
       the ORB vendor's implementation will provide a "real"
       implementation of the class.

       In order to be conformant the class shall support the signatures
       specified here, but will have an orb-specific implementation.

       The class may support additional vendor specific functionality.
       It shall have at least the inheritance relationships specified
       here. Any additional (vendor specific) inheritance relationships may 
       only be with other classes and interfaces that are guaranteed to be 
       present in the JDK core.
*****/

package org.omg.PortableServer;

public class IdAssignmentPolicyValue implements org.omg.CORBA.portable.IDLEntity {

    public static final int _USER_ID = 0;
    public static final IdAssignmentPolicyValue USER_ID = 
        new IdAssignmentPolicyValue(_USER_ID);

    public static final int _SYSTEM_ID = 1;
    public static final IdAssignmentPolicyValue SYSTEM_ID = 
        new IdAssignmentPolicyValue(_SYSTEM_ID);

    public int value() {
        throw new org.omg.CORBA.NO_IMPLEMENT();
    }

    public static IdAssignmentPolicyValue from_int(int val) 
                       /* Issue 3669 throws org.omg.CORBA.BAD_PARAM */ {
    switch (val) {
    case _USER_ID:
        return USER_ID;
    case _SYSTEM_ID:
        return SYSTEM_ID;
    default:
        throw new org.omg.CORBA.BAD_PARAM();
    }
    }

    protected IdAssignmentPolicyValue(int _value) {
        throw new org.omg.CORBA.NO_IMPLEMENT();
    }

}
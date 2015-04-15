
@interface _NSThreadData : NSObject {

    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    i seqNum;
    C qstate;
    c qos;
    C cancel;
    C status;
    id performQ;
    @"NSMutableDictionary" performD;
    {_opaque_pthread_attr_t="__sig"q"__opaque"[56c]} attr;
    ^{_opaque_pthread_t=q^{__darwin_pthread_handler_rec}[8176c]} tid;
    d pri;
    d defpri;
}



@end

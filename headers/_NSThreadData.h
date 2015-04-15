
@interface _NSThreadData : NSObject {

    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    int seqNum;
    unsigned char qstate;
    char qos;
    unsigned char cancel;
    unsigned char status;
    id performQ;
    NSMutableDictionary performD;
    {_opaque_pthread_attr_t="__sig"q"__opaque"[56c]} attr;
    ^{_opaque_pthread_t=q^{__darwin_pthread_handler_rec}[8176c]} tid;
    double pri;
    double defpri;
}



@end


@protocol OS_xpc_object;
@interface OS_xpc_object : OS_object <OS_xpc_object> {

}

 - (id) description;
 - (id) retain;
 - (void) _xref_dispose;
 - (void) _dispose;
 - (id) debugDescription;
 - (id) init;


@end

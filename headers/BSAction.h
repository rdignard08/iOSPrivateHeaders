
@protocol BSXPCCoding, BSSettingDescriptionProvider;
@interface BSAction : NSObject <BSXPCCoding, BSSettingDescriptionProvider> {

    @"BSSettings" _info;
    BOOL _expectsResponse;
    Q _timeout;
    @"NSObject<OS_dispatch_queue>" _queue;
    BOOL _queue_hasBeenNeutered;
    @? _queue_handler;
    {?="port"I"endpoint"@"NSObject<OS_xpc_object>"} _queue_listenerTokens;
    @"NSObject<OS_dispatch_source>" _queue_timer;
}
@property (nonatomic, copy, readonly) BSSettings* info;

 - (q) UIActionType;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) canSendResponse;
 - (void) sendResponse:(id)a;
 - (id) init;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) initWithInfo:(id)atimeout:(d)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) _handlerDescription;
 - (id) descriptionWithMultilinePrefix:(id)a;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;
 - (id) info;


@end


@protocol BSXPCCoding, BSSettingDescriptionProvider;
@interface BSAction : NSObject <BSXPCCoding, BSSettingDescriptionProvider> {

    @"BSSettings" _info;
    BOOL _expectsResponse;
    unsigned long long _timeout;
    @"NSObject<OS_dispatch_queue>" _queue;
    BOOL _queue_hasBeenNeutered;
    @? _queue_handler;
    {?="port"I"endpoint"@"NSObject<OS_xpc_object>"} _queue_listenerTokens;
    @"NSObject<OS_dispatch_source>" _queue_timer;
}
@property (nonatomic, copy, readonly) BSSettings* info;

 - (long long) UIActionType;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) canSendResponse;
 - (void) sendResponse:(id)a;
 - (id) init;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) initWithInfo:(id)atimeout:(double)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) _handlerDescription;
 - (id) descriptionWithMultilinePrefix:(id)a;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;
 - (id) info;


@end

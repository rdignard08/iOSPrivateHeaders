
@protocol NSCopying, BSXPCCoding, BSSettingDescriptionProvider;
@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider> {

    BSSettings _info;
    NSError _error;
}
@property (nonatomic, copy, readonly) BSSettings* info;
@property (nonatomic, retain, readonly) NSError* error;
 + (id) response;
 + (id) responseForError:(id)a;
 + (id) responseWithInfo:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (id) error;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) descriptionWithMultilinePrefix:(id)a;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;
 - (id) initWithInfo:(id)aerror:(id)b;
 - (id) info;


@end

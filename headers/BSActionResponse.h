
@protocol NSCopying, BSXPCCoding, BSSettingDescriptionProvider;
@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider> {

    @"BSSettings" _info;
    @"NSError" _error;
}
@property (nonatomic, copy, readonly) BSSettings* info;
@property (nonatomic, retain, readonly) NSError* error;
 + (id) response;
 + (id) responseForError:(id)a;
 + (id) responseWithInfo:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (id) error;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) descriptionWithMultilinePrefix:(id)a;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;
 - (id) initWithInfo:(id)aerror:(id)b;
 - (id) info;


@end


@interface _UIDefinitionValue : NSObject {

    @"NSString" _localizedDictionaryName;
    @"NSString" _term;
    @"NSAttributedString" _definition;
    @"NSString" _longDefinition;
    @"ASAsset" _rawAsset;
}
@property (atomic, assign, readonly) NSString* localizedDictionaryName;
@property (atomic, assign, readonly) NSString* term;
@property (atomic, assign, readonly) NSAttributedString* definition;
@property (atomic, assign, readonly) NSString* longDefinition;
@property (nonatomic, retain, readwrite) ASAsset* rawAsset;

 - (id) description;
 - (void) dealloc;
 - (id) initWithLocalizedDictionaryName:(id)aterm:(id)bdefinition:(id)clongDefinition:(id)d;
 - (id) localizedDictionaryName;
 - (id) term;
 - (id) definition;
 - (id) longDefinition;
 - (id) rawAsset;
 - (void) setRawAsset:(id)a;


@end

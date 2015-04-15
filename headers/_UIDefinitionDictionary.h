
@interface _UIDefinitionDictionary : NSObject {

    ^{__DCSDictionary=} _dictionary;
    BOOL _activated;
    @"ASAsset" _rawAsset;
    @"NSString" _definitionLanguage;
}
@property (atomic, assign, readonly) ASAsset* rawAsset;
@property (atomic, assign, readonly) NSString* localizedLanguageName;
@property (atomic, assign, readonly) NSString* localizedDictionaryName;
@property (atomic, assign, readonly) NSString* definitionLanguage;
@property (atomic, assign, readwrite) NSNumber* activated;
 + (id) _normalizedLanguageStringForLanguageCode:(id)a;

 - (id) description;
 - (void) dealloc;
 - (id) localizedDictionaryName;
 - (id) rawAsset;
 - (id) _HTMLDefinitionForTerm:(id)atype:(q)b;
 - (id) _shortHTMLDefinitionForTerm:(id)a;
 - (id) _attributedDefinitionForTerm:(id)a;
 - (id) _fullHTMLDefinitionForTerm:(id)a;
 - (BOOL) activated;
 - (id) localizedLanguageName;
 - (BOOL) _hasDefinitionForTerm:(id)a;
 - (id) _definitionValueForTerm:(id)a;
 - (id) definitionLanguage;
 - (void) setActivated:(BOOL)a;
 - (id) initWithAsset:(id)a;


@end

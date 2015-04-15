
@interface NSTextAlternatives : NSObject {

    NSString _primaryString;
    NSArray _alternativeStrings;
    id _internal;
}
@property (atomic, assign, readonly) NSString* primaryString;
@property (atomic, assign, readonly) NSArray* alternativeStrings;

 - (id) alternativeStrings;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) originalText;
 - (id) alternatives;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;
 - (id) initWithPrimaryString:(id)aalternativeStrings:(id)b;
 - (id) initWithPrimaryString:(id)aalternativeStrings:(id)bidentifier:(id)c;
 - (id) primaryString;
 - (id) initWithOriginalText:(id)aalternatives:(id)b;
 - (id) initWithOriginalText:(id)aalternatives:(id)bidentifier:(id)c;
 - (void) noteSelectedAlternativeString:(id)a;
 - (unsigned long long) numberOfAlternatives;
 - (id) alternativeAtIndex:(unsigned long long)a;


@end

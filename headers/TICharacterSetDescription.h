
@protocol NSCopying, NSSecureCoding;
@interface TICharacterSetDescription : NSObject <NSCopying, NSSecureCoding> {

    @"NSCharacterSet" _characterSet;
    BOOL _inverted;
    q _baseIdentifier;
    @"NSString" _charactersAddedToBase;
}
@property (nonatomic, assign, readonly) NSCharacterSet* characterSet;
@property (nonatomic, assign, readonly) NSNumber* baseIdentifier;
@property (nonatomic, copy, readwrite) NSString* charactersAddedToBase;
@property (nonatomic, assign, readonly) NSNumber* inverted;
 + (BOOL) supportsSecureCoding;

 - (id) awakeAfterUsingCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithBase:(q)aadditionalCharacters:(id)binverted:(BOOL)c;
 - (q) baseIdentifier;
 - (BOOL) inverted;
 - (id) charactersAddedToBase;
 - (id) newCharacterSetFromDescription;
 - (id) initWithBaseCharacterSet:(q)a;
 - (id) initWithCharactersInString:(id)a;
 - (id) invertedSetDescription;
 - (id) characterSet;
 - (void) clearCachedCharacterSet;
 - (void) setCharactersAddedToBase:(id)a;


@end

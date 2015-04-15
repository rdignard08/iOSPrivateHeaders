
@protocol NSCopying, NSSecureCoding;
@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {

    BOOL _hasCandidateKey;
    BOOL _hasAccentKey;
    BOOL _canMultitap;
    BOOL _isAlphabeticPlane;
    BOOL _interfaceIdiomIsPad;
    NSString _inputMode;
    NSString _layoutTag;
}
@property (nonatomic, copy, readwrite) NSString* inputMode;
@property (nonatomic, assign, readwrite) NSNumber* hasCandidateKey;
@property (nonatomic, assign, readwrite) NSNumber* hasAccentKey;
@property (nonatomic, assign, readwrite) NSNumber* canMultitap;
@property (nonatomic, assign, readwrite) NSNumber* isAlphabeticPlane;
@property (nonatomic, copy, readwrite) NSString* layoutTag;
@property (nonatomic, assign, readwrite) NSNumber* interfaceIdiomIsPad;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setInputMode:(id)a;
 - (void) setHasCandidateKey:(BOOL)a;
 - (void) setHasAccentKey:(BOOL)a;
 - (void) setCanMultitap:(BOOL)a;
 - (void) setIsAlphabeticPlane:(BOOL)a;
 - (void) setLayoutTag:(id)a;
 - (void) setInterfaceIdiomIsPad:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) layoutTag;
 - (id) inputMode;
 - (BOOL) hasCandidateKey;
 - (BOOL) hasAccentKey;
 - (BOOL) canMultitap;
 - (BOOL) isAlphabeticPlane;
 - (BOOL) interfaceIdiomIsPad;


@end

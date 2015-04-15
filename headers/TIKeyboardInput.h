
@protocol NSSecureCoding;
@interface TIKeyboardInput : NSObject <NSSecureCoding> {

    (?="integerValue"q"fields"{?="uppercase"b1"autoshifted"b1"popupVariant"b1"multitap"b1"flick"b1"synthesizedByAcceptingCandidate"b1}) _flags;
    BOOL _backspace;
    @"NSString" _string;
    @"<NSCopying><NSObject><NSSecureCoding>" _object;
    @"TIKeyboardTouchEvent" _touchEvent;
    @"TIKeyboardCandidate" _acceptedCandidate;
}
@property (nonatomic, copy, readwrite) NSString* string;
@property (nonatomic, copy, readwrite) NSNumber* object;
@property (nonatomic, assign, readwrite, isBackspace) NSNumber* backspace;
@property (nonatomic, assign, readwrite, isUppercase) NSNumber* uppercase;
@property (nonatomic, assign, readwrite, isAutoshifted) NSNumber* autoshifted;
@property (nonatomic, assign, readwrite, isPopupVariant) NSNumber* popupVariant;
@property (nonatomic, assign, readwrite, isMultitap) NSNumber* multitap;
@property (nonatomic, assign, readwrite, isFlick) NSNumber* flick;
@property (nonatomic, assign, readwrite, isSynthesizedByAcceptingCandidate) NSNumber* synthesizedByAcceptingCandidate;
@property (nonatomic, retain, readwrite) TIKeyboardTouchEvent* touchEvent;
@property (nonatomic, retain, readwrite) TIKeyboardCandidate* acceptedCandidate;
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (id) object;
 - (void) setString:(id)a;
 - (void) setObject:(id)a;
 - (void) setUppercase:(BOOL)a;
 - (void) setAutoshifted:(BOOL)a;
 - (void) setPopupVariant:(BOOL)a;
 - (void) setMultitap:(BOOL)a;
 - (void) setFlick:(BOOL)a;
 - (void) setSynthesizedByAcceptingCandidate:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setAcceptedCandidate:(id)a;
 - (id) acceptedCandidate;
 - (void) setBackspace:(BOOL)a;
 - (void) setTouchEvent:(id)a;
 - (BOOL) isBackspace;
 - (BOOL) isUppercase;
 - (BOOL) isAutoshifted;
 - (BOOL) isPopupVariant;
 - (BOOL) isMultitap;
 - (BOOL) isFlick;
 - (BOOL) isSynthesizedByAcceptingCandidate;
 - (id) touchEvent;


@end

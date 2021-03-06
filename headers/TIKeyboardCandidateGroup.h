
@protocol NSCopying, NSSecureCoding;
@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {

    NSString* _title;
    NSOrderedSet* _candidates;
    NSArray* _nonExtensionCandidates;
}
@property (atomic, copy, readwrite) NSString* title;
@property (atomic, copy, readwrite) NSOrderedSet* candidates;
@property (atomic, retain, readwrite) NSArray* nonExtensionCandidates;
 + (BOOL) supportsSecureCoding;

 - (id) title;
 - (void) setTitle:(id)a ;
 - (void) sortUsingComparator:(@?)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) sortWithOptions:(unsigned long long)a usingComparator:(@?)b ;
 - (id) initWithTitle:(id)a candidates:(id)b ;
 - (BOOL) hasAlternativeText;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) nonExtensionCandidates;
 - (void) setCandidates:(id)a ;
 - (id) mutableCandidates;
 - (void) setNonExtensionCandidates:(id)a ;
 - (void) addCandidate:(id)a ;
 - (id) candidates;


@end

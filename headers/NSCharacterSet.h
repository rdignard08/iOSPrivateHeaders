
@protocol NSCopying, NSMutableCopying, NSCoding;
@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {

}
@property (atomic, copy, readonly) NSData* bitmapRepresentation;
@property (atomic, copy, readonly) NSCharacterSet* invertedSet;
 + (id) whitespaceAndNewlineCharacterSet;
 + (id) whitespaceCharacterSet;
 + (id) letterCharacterSet;
 + (id) decimalDigitCharacterSet;
 + (id) alphanumericCharacterSet;
 + (id) controlCharacterSet;
 + (id) lowercaseLetterCharacterSet;
 + (id) uppercaseLetterCharacterSet;
 + (id) nonBaseCharacterSet;
 + (id) decomposableCharacterSet;
 + (id) punctuationCharacterSet;
 + (id) capitalizedLetterCharacterSet;
 + (id) illegalCharacterSet;
 + (id) symbolCharacterSet;
 + (id) newlineCharacterSet;
 + (id) characterSetWithContentsOfFile:(id)a;
 + (id) characterSetWithBitmapRepresentation:(id)a;
 + (id) URLUserAllowedCharacterSet;
 + (id) URLPasswordAllowedCharacterSet;
 + (id) URLHostAllowedCharacterSet;
 + (id) URLPathAllowedCharacterSet;
 + (id) URLQueryAllowedCharacterSet;
 + (id) URLFragmentAllowedCharacterSet;
 + (void) initialize;
 + (id) characterSetWithCharactersInString:(id)a;
 + (id) characterSetWithRange:({_NSRange=QQ})a;

 - (BOOL) characterIsMember:(S)a;
 - (BOOL) isMutable;
 - (void) makeImmutable;
 - (BOOL) isSupersetOfSet:(id)a;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (Q) count;
 - (BOOL) isEmpty;
 - (id) invertedSet;
 - (BOOL) longCharacterIsMember:(I)a;
 - (BOOL) hasMemberInPlane:(C)a;
 - (id) _retainedBitmapRepresentation;
 - (^{__CFCharacterSet=}) _expandedCFCharacterSet;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;
 - (id) bitmapRepresentation;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end

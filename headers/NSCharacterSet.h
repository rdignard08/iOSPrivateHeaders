
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

 - (BOOL) characterIsMember:(unsigned short)a;
 - (BOOL) isMutable;
 - (void) makeImmutable;
 - (BOOL) isSupersetOfSet:(id)a;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (unsigned long long) count;
 - (BOOL) isEmpty;
 - (id) invertedSet;
 - (BOOL) longCharacterIsMember:(unsigned int)a;
 - (BOOL) hasMemberInPlane:(unsigned char)a;
 - (id) _retainedBitmapRepresentation;
 - (^{__CFCharacterSet=}) _expandedCFCharacterSet;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) _cfTypeID;
 - (id) bitmapRepresentation;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end

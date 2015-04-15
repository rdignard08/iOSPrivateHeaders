
@protocol NSCoding;
@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {

    {_NSRange="location"Q"length"Q} _range;
    d _offsetInLine;
}
 + (id) restorableScrollPositionForTextView:(id)a;
 + (id) restorableScrollPositionWithRange:({_NSRange=QQ})a;
 + (id) restorableScrollPositionWithDictionary:(id)a;

 - (id) dictionaryRepresentation;
 - (id) initWithTextView:(id)a;
 - (d) offsetWithinLine;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;


@end

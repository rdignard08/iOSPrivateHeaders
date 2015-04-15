
@protocol NSCopying;
@interface _NSAttributeRun : NSObject <NSCopying> {

    {_NSRange="location"Q"length"Q} _range;
    @"NSTextStorage" _textStorage;
    @"NSMutableArray" _attributesArray;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) initWithTextStorage:(id)arange:({_NSRange=QQ})b;
 - (void) restoreAttributesOfTextStorage:(id)a;
 - ({_NSRange=QQ}) range;


@end

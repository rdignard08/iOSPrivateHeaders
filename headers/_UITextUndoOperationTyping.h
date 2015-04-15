
@interface _UITextUndoOperationTyping : NSUndoTextOperation {

    {_NSRange="location"Q"length"Q} _replacementRange;
    NSMutableAttributedString* _attributedString;
}

 - (void) dealloc;
 - (BOOL) coalesceAffectedRange:({_NSRange=QQ})a replacementRange:({_NSRange=QQ})b selectedRange:({_NSRange=QQ})c textStorage:(id)d ;
 - (id) initWithAffectedRange:({_NSRange=QQ})a inputController:(id)b replacementRange:({_NSRange=QQ})c ;
 - (void) undoRedo;
 - (BOOL) supportsCoalescing;


@end

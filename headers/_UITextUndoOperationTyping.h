
@interface _UITextUndoOperationTyping : NSUndoTextOperation {

    {_NSRange="location"Q"length"Q} _replacementRange;
    @"NSMutableAttributedString" _attributedString;
}

 - (void) dealloc;
 - (BOOL) coalesceAffectedRange:({_NSRange=QQ})areplacementRange:({_NSRange=QQ})bselectedRange:({_NSRange=QQ})ctextStorage:(id)d;
 - (id) initWithAffectedRange:({_NSRange=QQ})ainputController:(id)breplacementRange:({_NSRange=QQ})c;
 - (void) undoRedo;
 - (BOOL) supportsCoalescing;


@end

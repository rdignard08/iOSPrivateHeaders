
@interface _UITextUndoOperationReplace : NSUndoTextOperation {

    {_NSRange="location"Q"length"Q} _replacementRange;
    NSAttributedString _attributedString;
}

 - (void) dealloc;
 - (id) initWithAffectedRange:({_NSRange=QQ})ainputController:(id)breplacementRange:({_NSRange=QQ})c;
 - (void) undoRedo;


@end

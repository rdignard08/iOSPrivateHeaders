
@interface _UITextUndoOperationSetAttributes : NSUndoTextOperation {

    _NSAttributeRun _attributes;
}

 - (void) dealloc;
 - (id) initWithAffectedRange:({_NSRange=QQ})ainputController:(id)b;
 - (void) undoRedo;


@end

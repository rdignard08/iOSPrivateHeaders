
@interface _UIDictationAttachment : NSTextAttachment {

    @"NSDictionary" _typingAttributesBeforeInsertion;
    {_NSRange="location"Q"length"Q} _attachmentRange;
}

 - (void) dealloc;
 - ({_NSRange=QQ}) attachmentRange;
 - (void) setAttachmentRange:({_NSRange=QQ})a;
 - (id) typingAttributesBeforeInsertion;
 - (void) setTypingAttributesBeforeInsertion:(id)a;


@end

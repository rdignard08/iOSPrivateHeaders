
@interface UIKBTextEditingTraits : NSObject {

    BOOL _canToggleBoldface;
    BOOL _canToggleItalics;
    BOOL _canToggleUnderline;
    BOOL _supportStyling;
    BOOL _canCut;
    BOOL _canCopy;
    BOOL _canPaste;
    BOOL _canMoveCursorLeft;
    BOOL _canMoveCursorRight;
    BOOL _isBold;
    BOOL _isItalicized;
    BOOL _isUnderlined;
}
@property (nonatomic, assign, readonly) NSNumber* isBold;
@property (nonatomic, assign, readonly) NSNumber* isItalicized;
@property (nonatomic, assign, readonly) NSNumber* isUnderlined;
@property (nonatomic, assign, readonly) NSNumber* canToggleBoldface;
@property (nonatomic, assign, readonly) NSNumber* canToggleItalics;
@property (nonatomic, assign, readonly) NSNumber* canToggleUnderline;
@property (nonatomic, assign, readonly) NSNumber* supportStyling;
@property (nonatomic, assign, readwrite) NSNumber* canCut;
@property (nonatomic, assign, readonly) NSNumber* canCopy;
@property (nonatomic, assign, readonly) NSNumber* canPaste;
@property (nonatomic, assign, readonly) NSNumber* canMoveCursorLeft;
@property (nonatomic, assign, readonly) NSNumber* canMoveCursorRight;
 + (id) traitsWithResponder:(id)akeyMaskFlags:(Q)b;

 - (id) initWithResponder:(id)akeyMaskFlags:(Q)b;
 - (BOOL) canToggleBoldface;
 - (BOOL) canToggleItalics;
 - (BOOL) canToggleUnderline;
 - (BOOL) supportStyling;
 - (BOOL) canCut;
 - (void) setCanCut:(BOOL)a;
 - (BOOL) canCopy;
 - (BOOL) canPaste;
 - (BOOL) canMoveCursorLeft;
 - (BOOL) canMoveCursorRight;
 - (BOOL) isBold;
 - (BOOL) isItalicized;
 - (BOOL) isUnderlined;


@end

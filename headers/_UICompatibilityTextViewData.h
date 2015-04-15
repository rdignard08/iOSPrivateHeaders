
@interface _UICompatibilityTextViewData : NSObject {

    WebFrame* m_frame;
    DOMHTMLElement* m_body;
    int m_marginTop;
    UIDelayedAction* m_selectionTimer;
    UIDelayedAction* m_longPressAction;
    BOOL m_editable;
    BOOL m_editing;
    BOOL m_becomesEditableWithGestures;
    BOOL m_reentrancyGuard;
    BOOL m_readyForScroll;
    BOOL m_hasExplicitTextAlignment;
    BOOL m_hasExplicitLineHeight;
    UITextInteractionAssistant* m_interactionAssistant;
    UIWebDocumentView* m_webView;
    UIFont* m_font;
    UIColor* m_textColor;
    long long m_textAlignment;
    UIView* m_inputView;
    UIView* m_inputAccessoryView;
    double m_lineHeight;
    BOOL m_skipScrollContainingView;
    BOOL m_allowsEditingTextAttributes;
    BOOL m_usesAttributedText;
    BOOL m_clearsOnInsertion;
}



@end

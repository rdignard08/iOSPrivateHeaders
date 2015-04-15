
@protocol UITextInput, UITextLinkInteraction, UITextInputTraits;
@interface UITextContentView : UIView <UITextInput, UITextLinkInteraction, UITextInputTraits> {

    id m_delegate;
    @"WebFrame" m_frame;
    @"DOMHTMLElement" m_body;
    i m_marginTop;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} m_selectionInset;
    d m_bottomBufferHeight;
    BOOL m_editable;
    BOOL m_editing;
    BOOL m_becomesEditableWithGestures;
    BOOL m_becomingFirstResponder;
    BOOL m_reentrancyGuard;
    BOOL m_scrollsSelectionOnWebDocumentChanges;
    BOOL m_hasExplicitTextAlignment;
    BOOL m_allowsEditingTextAttributes;
    BOOL m_usesAttributedText;
    @"UITextInteractionAssistant" m_interactionAssistant;
    @"UIWebDocumentView" m_webView;
    @"UIFont" m_font;
    @"UIColor" m_textColor;
    q m_textAlignment;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (void) setDelegate:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) setTextAlignment:(q)a;
 - (void) setAttributedText:(id)a;
 - (void) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})aanimated:(BOOL)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (void) increaseSize:(id)a;
 - (void) decreaseSize:(id)a;
 - (void) _scrollViewWillBeginDragging;
 - (void) _scrollViewDidEndDraggingWithDeceleration:(BOOL)a;
 - (void) _scrollViewDidEndDecelerating;
 - (void) setTextColor:(id)a;
 - (void) setFont:(id)a;
 - (void) setText:(id)a;
 - (BOOL) canBecomeFirstResponder;
 - (BOOL) isFirstResponder;
 - (void) didMoveToSuperview;
 - (void) _didScroll;
 - (id) _automationValue;
 - (id) attributedText;
 - (BOOL) isEditing;
 - (void) setEditing:(BOOL)a;
 - (id) interactionAssistant;
 - (id) selectionView;
 - (BOOL) keyboardInput:(id)ashouldInsertText:(id)bisMarkedText:(BOOL)c;
 - (BOOL) keyboardInput:(id)ashouldReplaceTextInRange:({_NSRange=QQ})breplacementText:(id)c;
 - (BOOL) keyboardInputShouldDelete:(id)a;
 - (BOOL) keyboardInputChanged:(id)a;
 - (void) keyboardInputChangedSelection:(id)a;
 - (void) scrollSelectionToVisible:(BOOL)a;
 - (id) textColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionClipRect;
 - (void) cancelAutoscroll;
 - (void) setSelectionWithPoint:({CGPoint=dd})a;
 - (q) textAlignment;
 - (id) beginningOfDocument;
 - (id) endOfDocument;
 - (id) textRangeFromPosition:(id)atoPosition:(id)b;
 - (id) textInRange:(id)a;
 - (id) inputDelegate;
 - (void) setSelectedRange:({_NSRange=QQ})a;
 - (void) setSelectedTextRange:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectForPosition:(id)a;
 - (BOOL) hasText;
 - (void) deleteBackward;
 - (void) replaceRange:(id)awithText:(id)b;
 - (id) selectedTextRange;
 - (id) markedTextRange;
 - (id) markedTextStyle;
 - (void) setMarkedTextStyle:(id)a;
 - (void) unmarkText;
 - (id) positionFromPosition:(id)aoffset:(q)b;
 - (id) positionFromPosition:(id)ainDirection:(q)boffset:(q)c;
 - (q) comparePosition:(id)atoPosition:(id)b;
 - (q) offsetFromPosition:(id)atoPosition:(id)b;
 - (id) positionWithinRange:(id)afarthestInDirection:(q)b;
 - (id) characterRangeByExtendingPosition:(id)ainDirection:(q)b;
 - (void) setInputDelegate:(id)a;
 - (id) tokenizer;
 - (q) baseWritingDirectionForPosition:(id)ainDirection:(q)b;
 - (void) setBaseWritingDirection:(q)aforRange:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) firstRectForRange:(id)a;
 - (id) selectionRectsForRange:(id)a;
 - (id) closestPositionToPoint:({CGPoint=dd})a;
 - (id) closestPositionToPoint:({CGPoint=dd})awithinRange:(id)b;
 - (id) characterRangeAtPoint:({CGPoint=dd})a;
 - (void) insertDictationResult:(id)awithCorrectionIdentifier:(id)b;
 - (id) insertDictationResultPlaceholder;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDictationResultPlaceholder:(id)a;
 - (void) removeDictationResultPlaceholder:(id)awillInsertResult:(BOOL)b;
 - (id) metadataDictionariesForDictationResults;
 - (void) beginSelectionChange;
 - (void) endSelectionChange;
 - (id) textStylingAtPosition:(id)ainDirection:(q)b;
 - (void) setSelectionAffinity:(q)a;
 - (void) startAutoscroll:({CGPoint=dd})a;
 - (void) selectAll;
 - ({_NSRange=QQ}) selectionRange;
 - (BOOL) hasMarkedText;
 - (BOOL) canResignFirstResponder;
 - (id) _keyboardResponder;
 - (void) commonInitWithWebDocumentView:(id)aisDecoding:(BOOL)b;
 - (void) setAllowsEditingTextAttributes:(BOOL)a;
 - (void) setEditable:(BOOL)a;
 - (void) setDataDetectorTypes:(Q)a;
 - (BOOL) allowsEditingTextAttributes;
 - (Q) dataDetectorTypes;
 - (id) styleString;
 - (id) _proxyTextInput;
 - (void) updateContentEditableAttribute:(BOOL)a;
 - (void) keyboardDidShow:(id)a;
 - (void) cancelDataDetectorsWithWebLock;
 - (void) setSelectionChangeCallbacksDisabled:(BOOL)a;
 - (void) performBecomeEditableTasks;
 - (void) selectAll:(id)a;
 - (void) setSelectionToEnd;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleTextRect;
 - (void) makeTextWritingDirectionRightToLeft:(id)a;
 - (void) makeTextWritingDirectionLeftToRight:(id)a;
 - (void) replace:(id)a;
 - (void) cut:(id)a;
 - (void) copy:(id)a;
 - (void) paste:(id)a;
 - (void) _define:(id)a;
 - (void) _addShortcut:(id)a;
 - (void) toggleBoldface:(id)a;
 - (void) toggleItalics:(id)a;
 - (void) toggleUnderline:(id)a;
 - (void) _showTextStyleOptions:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForScrollToVisible;
 - (void) ensureSelection;
 - (BOOL) shouldStartDataDetectors;
 - (void) startDataDetectorsWithWebLock;
 - (void) setContentToHTMLString:(id)a;
 - (void) recalculateStyle;
 - (void) resetDataDetectorsResultsWithWebLock;
 - (Q) _allowedLinkTypes;
 - (q) selectionGranularity;
 - (void) setSelectionGranularity:(q)a;
 - (BOOL) mightHaveLinks;
 - (void) tapLinkAtPoint:({CGPoint=dd})a;
 - (BOOL) isInteractingWithLink;
 - (void) startInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (void) updateInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (void) validateInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (void) cancelInteractionWithLink;
 - (void) startLongInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (BOOL) willInteractWithLinkAtPoint:({CGPoint=dd})a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})awebView:(id)b;
 - ({CGPoint=dd}) constrainedPoint:({CGPoint=dd})a;
 - (void) updateSelection;
 - (void) select:(id)a;
 - (void) _promptForReplace:(id)a;
 - (void) _transliterateChinese:(id)a;
 - (void) setSelectionToStart;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectForSelection:({_NSRange=QQ})a;
 - (id) contentAsHTMLString;
 - (BOOL) becomesEditableWithGestures;
 - (void) setBecomesEditableWithGestures:(BOOL)a;
 - (i) marginTop;
 - (void) setMarginTop:(i)a;
 - (void) scrollRangeToVisible:({_NSRange=QQ})a;
 - (id) automaticallySelectedOverlay;
 - (void) setBottomBufferHeight:(d)a;
 - (d) bottomBufferHeight;
 - (void) displayScrollerIndicators;
 - (id) fontForCaretSelection;
 - (void) _insertAttributedTextWithoutClosingTyping:(id)a;
 - ({UIEdgeInsets=dddd}) selectionInset;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectForVisiblePosition:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) closestCaretRectInMarkedTextRangeForPoint:({CGPoint=dd})a;
 - (Q) offsetInMarkedTextForSelection:(id)a;
 - (void) setScrollsSelectionOnWebDocumentChanges:(BOOL)a;
 - (BOOL) scrollsSelectionOnWebDocumentChanges;
 - (void) _sizeChanged;
 - (void) performScrollSelectionToVisible:(BOOL)a;
 - (void) _removeAttribute:(id)afromString:(id)bandSetPropertyWith:(SEL)cusingValueClass:(Class)d;
 - (void) _removeTextViewPropertiesFromText:(id)a;
 - (void) _hideSelectionCommands;
 - (void) setContentToAttributedString:(id)a;
 - (id) contentAsAttributedString;
 - (void) setSelectionInset:({UIEdgeInsets=dddd})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (q) selectionAffinity;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) webView;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) font;
 - (id) selectedText;
 - ({CGPoint=dd}) offset;
 - (void) setOffset:({CGPoint=dd})a;
 - ({_NSRange=QQ}) selectedRange;
 - (id) textInputTraits;
 - (BOOL) isEditable;
 - (id) supportedPasteboardTypesForCurrentSelection;
 - (id) documentFragmentForPasteboardItemAtIndex:(q)a;
 - (void) webViewDidChange:(id)a;
 - (id) undoManagerForWebView:(id)a;
 - (void) webView:(id)adecidePolicyForNavigationAction:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (id) undoManager;
 - (void) setMarkedText:(id)aselectedRange:({_NSRange=QQ})b;
 - (void) insertText:(id)a;
 - (BOOL) hasSelection;
 - (id) text;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;


@end

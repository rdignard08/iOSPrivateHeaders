
@protocol UITextLinkInteraction, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UITextInput;
@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UITextInput> {

    id _private;
    @"NSTextStorage" _textStorage;
    @"NSTextContainer" _textContainer;
    @"NSLayoutManager" _layoutManager;
    @"_UITextContainerView" _containerView;
    id _inputDelegate;
    @"<UITextInputTokenizer>" _tokenizer;
    @"UITextInputController" _inputController;
    @"UITextInteractionAssistant" _interactionAssistant;
    @"UITextInputTraits" _textInputTraits;
    @"UIAutoscroll" _autoscroll;
    {?="needsScrollToSelectionAfterLayout"b1"isInteractingWithLink"b1"linkInteractionIsLongPress"b1"editable"b1"reentrancyGuard"b1"usesExplicitPreferredMaxLayoutWidth"b1"determiningPreferredMaxLayoutWidth"b1"inSecondConstraintsPass"b1"interactiveSelectionDisabled"b1"selectable"b1"shouldPresentSheetsInAWindowLayeredAboveTheKeyboard"b1} _tvFlags;
    id _linkInteractionItem;
    @"_UITextViewRestorableScrollPosition" _scrollTarget;
    {CGPoint="x"d"y"d} _scrollTargetOffset;
    unsigned long long _dataDetectorTypes;
    double _preferredMaxLayoutWidth;
    @"UILabel" _placeholderLabel;
    @"UIView" _inputAccessoryView;
    @"_UISiriStreamingManager" _streamingManager;
    @"_UICharacterStreamingManager" _characterStreamingManager;
    long long _siriAnimationStyle;
    @"NSDictionary" _siriParameters;
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
    BOOL _clearsOnInsertion;
    @"UIView" _inputView;
}
 + (BOOL) _isCompatibilityTextView;
 + (id) _bestInterpretationForDictationResult:(id)a;
 + (id) _sharedHighlightView;

 - (void) dealloc;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setTextAlignment:(long long)a;
 - (void) setAttributedText:(id)a;
 - (void) setScrollEnabled:(BOOL)a;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (void) increaseSize:(id)a;
 - (void) decreaseSize:(id)a;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (BOOL) _isDisplayingShortcutViewController;
 - (void) setTextColor:(id)a;
 - (void) setFont:(id)a;
 - (void) setText:(id)a;
 - (void) invalidateIntrinsicContentSize;
 - (BOOL) canBecomeFirstResponder;
 - (double) _baselineOffsetFromBottom;
 - (double) _firstBaselineOffsetFromTop;
 - (void) tintColorDidChange;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) _scrollViewAnimationEnded:(id)afinished:(BOOL)b;
 - (id) attributedText;
 - (void) _updateContentSize;
 - (BOOL) isEditing;
 - (id) _containerView;
 - (void) _textStorageDidProcessEditing:(id)a;
 - (id) interactionAssistant;
 - (id) selectionView;
 - (BOOL) keyboardInput:(id)ashouldInsertText:(id)bisMarkedText:(BOOL)c;
 - (BOOL) keyboardInput:(id)ashouldReplaceTextInRange:({_NSRange=QQ})breplacementText:(id)c;
 - (BOOL) keyboardInputShouldDelete:(id)a;
 - (BOOL) keyboardInputChanged:(id)a;
 - (void) keyboardInputChangedSelection:(id)a;
 - (void) scrollSelectionToVisible:(BOOL)a;
 - (id) textColor;
 - (void) cancelAutoscroll;
 - (id) textInputView;
 - (void) setTypingAttributes:(id)a;
 - (id) _textInputTraits;
 - (void) takeTraitsFrom:(id)a;
 - (long long) textAlignment;
 - (id) beginningOfDocument;
 - (id) endOfDocument;
 - (id) textRangeFromPosition:(id)atoPosition:(id)b;
 - (id) textInRange:(id)a;
 - (id) inputDelegate;
 - (void) setSelectedRange:({_NSRange=QQ})a;
 - (void) addTextAlternativesDisplayStyleToRange:({_NSRange=QQ})a;
 - (void) setSelectedTextRange:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectForPosition:(id)a;
 - (void) _scrollRangeToVisible:({_NSRange=QQ})aanimated:(BOOL)b;
 - (BOOL) hasText;
 - (void) deleteBackward;
 - (void) replaceRange:(id)awithText:(id)b;
 - (void) replaceRangeWithTextWithoutClosingTyping:(id)areplacementText:(id)b;
 - (id) selectedTextRange;
 - (id) markedTextRange;
 - (id) markedTextStyle;
 - (void) setMarkedTextStyle:(id)a;
 - (void) unmarkText;
 - (id) positionFromPosition:(id)aoffset:(long long)b;
 - (id) positionFromPosition:(id)ainDirection:(long long)boffset:(long long)c;
 - (long long) comparePosition:(id)atoPosition:(id)b;
 - (long long) offsetFromPosition:(id)atoPosition:(id)b;
 - (id) positionWithinRange:(id)afarthestInDirection:(long long)b;
 - (id) characterRangeByExtendingPosition:(id)ainDirection:(long long)b;
 - (void) setInputDelegate:(id)a;
 - (id) tokenizer;
 - (long long) baseWritingDirectionForPosition:(id)ainDirection:(long long)b;
 - (void) setBaseWritingDirection:(long long)aforRange:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) firstRectForRange:(id)a;
 - (id) selectionRectsForRange:(id)a;
 - (id) closestPositionToPoint:({CGPoint=dd})a;
 - (id) closestPositionToPoint:({CGPoint=dd})awithinRange:(id)b;
 - (id) characterRangeAtPoint:({CGPoint=dd})a;
 - (void) insertDictationResult:(id)awithCorrectionIdentifier:(id)b;
 - (id) insertDictationResultPlaceholder;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDictationResultPlaceholder:(id)a;
 - (void) removeDictationResultPlaceholder:(id)awillInsertResult:(BOOL)b;
 - (id) rangeWithTextAlternatives:(^@)aatPosition:(id)b;
 - (id) metadataDictionariesForDictationResults;
 - (void) beginSelectionChange;
 - (void) endSelectionChange;
 - (BOOL) textInput:(id)ashouldChangeCharactersInRange:({_NSRange=QQ})breplacementText:(id)c;
 - (void) textInputDidChange:(id)a;
 - (void) textInputDidChangeSelection:(id)a;
 - (id) textContainer;
 - (id) textStylingAtPosition:(id)ainDirection:(long long)b;
 - (void) startAutoscroll:({CGPoint=dd})a;
 - (void) updateConstraints;
 - (BOOL) canResignFirstResponder;
 - (id) inputView;
 - (id) inputAccessoryView;
 - (void) setAllowsEditingTextAttributes:(BOOL)a;
 - (void) setEditable:(BOOL)a;
 - (void) setLineHeight:(double)a;
 - (void) setDataDetectorTypes:(unsigned long long)a;
 - (BOOL) allowsEditingTextAttributes;
 - (unsigned long long) dataDetectorTypes;
 - (void) setInputView:(id)a;
 - (void) setInputAccessoryView:(id)a;
 - (void) selectAll:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleTextRect;
 - (void) setClearsOnInsertion:(BOOL)a;
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
 - (void) setContentToHTMLString:(id)a;
 - (BOOL) mightHaveLinks;
 - (void) tapLinkAtPoint:({CGPoint=dd})a;
 - (BOOL) isInteractingWithLink;
 - (void) startInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (void) updateInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (void) validateInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (void) cancelInteractionWithLink;
 - (void) startLongInteractionWithLinkAtPoint:({CGPoint=dd})a;
 - (BOOL) willInteractWithLinkAtPoint:({CGPoint=dd})a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})afont:(id)b;
 - (void) _setDictationResult:(id)awithCorrectionIdentifier:(id)b;
 - (BOOL) clearsOnInsertion;
 - (void) disableClearsOnInsertion;
 - (void) updateSelection;
 - (void) select:(id)a;
 - (void) _promptForReplace:(id)a;
 - (void) _transliterateChinese:(id)a;
 - (void) setBecomesEditableWithGestures:(BOOL)a;
 - (unsigned long long) marginTop;
 - (void) setMarginTop:(unsigned long long)a;
 - (void) scrollRangeToVisible:({_NSRange=QQ})a;
 - (id) automaticallySelectedOverlay;
 - (Class) _printFormatterClass;
 - (BOOL) _isDisplayingReferenceLibraryViewController;
 - (double) _preferredMaxLayoutWidth;
 - (BOOL) _needsDoubleUpdateConstraintsPass;
 - (void) _prepareForFirstIntrinsicContentSizeCalculation;
 - (void) _prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setInSecondConstraintsPass:(BOOL)a;
 - (id) _layoutDebuggingTitle;
 - (void) _resetUsesExplicitPreferredMaxLayoutWidth;
 - (void) setContinuousSpellCheckingEnabled:(BOOL)a;
 - (void) _insertAttributedTextWithoutClosingTyping:(id)a;
 - (BOOL) forceEnableDictation;
 - (void) setForceEnableDictation:(BOOL)a;
 - (void) _deleteBackwardAndNotify:(BOOL)a;
 - (void) _keyboardDidShow:(id)a;
 - (BOOL) isAccessibilityElementByDefault;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (id) _textInputViewForAddingGestureRecognizers;
 - (BOOL) _isInteractiveTextSelectionDisabled;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atextContainer:(id)b;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforViewPrintFormatter:(id)b;
 - (void) _setInteractiveTextSelectionDisabled:(BOOL)a;
 - (BOOL) _wantsBaselineUpdatingFollowingConstraintsPass;
 - (void) _updateBaselineInformationDependentOnBounds;
 - (void) _streamingManagerDidCommitFinalResults;
 - (void) _observedTextViewDidChange:(id)a;
 - (void) setSelectable:(BOOL)a;
 - (void) _commonInitWithTextContainer:(id)aisDecoding:(BOOL)bisEditable:(BOOL)cisSelectable:(BOOL)d;
 - (void) setUsesTiledViews:(BOOL)a;
 - (BOOL) isSelectable;
 - (BOOL) _shouldStartDataDetectors;
 - (void) _startDataDetectors;
 - (void) _updatePlaceholderVisibility;
 - (unsigned long long) _totalNumberOfTextViewsInLayoutManager;
 - ({_NSRange=QQ}) _visibleRangeWithLayout:(BOOL)a;
 - ({CGPoint=dd}) _contentOffsetForScrollToVisible:({_NSRange=QQ})a;
 - (void) _setScrollTarget:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRectIgnoringKeyboard;
 - (void) _layoutPlaceholder;
 - (void) _resyncContainerFrameForNonAutolayout;
 - (BOOL) _shouldScrollEnclosingScrollView;
 - (void) _scrollSelectionToVisibleInContainingScrollView;
 - (BOOL) usesTiledViews;
 - (void) _performLayoutCalculation:(@?)ainSize:({CGSize=dd})b;
 - (double) _currentPreferredMaxLayoutWidth;
 - ({CGPoint=dd}) _firstGlyphBaselineLeftPointWithLayoutManager:(id)a;
 - ({CGPoint=dd}) _lastGlyphBaselineRightPointWithLayoutManager:(id)a;
 - (void) _baselineOffsetDidChange;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rectForScrollToVisible:({_NSRange=QQ})a;
 - (void) _scrollSelectionToVisibleInContainingScrollView:(BOOL)a;
 - (void) _resetDataDetectorsResults;
 - (id) extractWordArrayFromTokensArray:(id)a;
 - (void) _didRecognizeSpeechStrings:(id)a;
 - (void) _restoreScrollPosition:(id)aanimated:(BOOL)b;
 - (void) setTextContainerInset:({UIEdgeInsets=dddd})a;
 - (void) setLinkTextAttributes:(id)a;
 - (void) _setWhitelistedTypingAttributes:(id)a;
 - (id) _whitelistedTypingAttributes;
 - (void) _selectionMayChange:(id)a;
 - (void) _registerUndoOperationForReplacementWithActionName:(id)areplacementText:(id)b;
 - (unsigned long long) _effectiveDataDetectorTypes;
 - (id) initReadonlyAndUnselectableWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atextContainer:(id)b;
 - (void) _setPreferredMaxLayoutWidth:(double)a;
 - (BOOL) shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
 - (void) setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(BOOL)a;
 - (void) setAttributedPlaceholder:(id)a;
 - (id) attributedPlaceholder;
 - (void) _enableSiriAnimationDictationStyle;
 - (void) _enableSiriAnimationDictationStyleWithCharacterInsertionRate:(double)aminimumDurationBetweenHypotheses:(double)b;
 - (void) _didRecognizeSpeechTokens:(id)a;
 - (void) _didFinishSpeechRecognition;
 - ({CGPoint=dd}) _openQuoteAnchor;
 - ({CGPoint=dd}) _closeQuoteAnchor;
 - (id) _restorableScrollPosition;
 - (BOOL) _mightHaveSelection;
 - (void) _cancelDataDetectors;
 - (id) _interactableItemAtPoint:({CGPoint=dd})a;
 - (void) _highlightLinkAtPoint:({CGPoint=dd})a;
 - (void) _resetLinkInteraction;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _presentationRectForLinkAtRange:({_NSRange=QQ})a;
 - (void) _finishHandlingInteraction:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) textStorage;
 - (id) linkTextAttributes;
 - (long long) selectionAffinity;
 - (id) layoutManager;
 - (BOOL) _drawsDebugBaselines;
 - (void) _setDrawsDebugBaselines:(BOOL)a;
 - ({UIEdgeInsets=dddd}) textContainerInset;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (id) typingAttributes;
 - (double) lineHeight;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) webView;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) font;
 - (id) selectedText;
 - ({_NSRange=QQ}) selectedRange;
 - (BOOL) isEditable;
 - (id) undoManager;
 - (void) setMarkedText:(id)aselectedRange:({_NSRange=QQ})b;
 - (void) insertText:(id)a;
 - (id) text;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;


@end

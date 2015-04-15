
@protocol UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding;
@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding> {

    _UICascadingTextStorage* _textStorage;
    long long _borderStyle;
    double _minimumFontSize;
    id _delegate;
    UIImage* _background;
    UIImage* _disabledBackground;
    long long _clearButtonMode;
    UIView* _leftView;
    long long _leftViewMode;
    UIView* _rightView;
    long long _rightViewMode;
    UITextInputTraits* _traits;
    UITextInputTraits* _nonAtomTraits;
    double _fullFontSize;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _padding;
    {_NSRange="location"Q"length"Q} _selectionRangeWhenNotEditing;
    int _scrollXOffset;
    int _scrollYOffset;
    float _progress;
    UIButton* _clearButton;
    {CGSize="width"d"height"d} _clearButtonOffset;
    {CGSize="width"d"height"d} _leftViewOffset;
    {CGSize="width"d"height"d} _rightViewOffset;
    UITextFieldBorderView* _backgroundView;
    UITextFieldBorderView* _disabledBackgroundView;
    UITextFieldBackgroundView* _systemBackgroundView;
    UITextFieldLabel* _displayLabel;
    UITextFieldLabel* _placeholderLabel;
    UITextFieldLabel* _suffixLabel;
    UITextFieldLabel* _prefixLabel;
    UIImageView* _iconView;
    UILabel* _label;
    double _labelOffset;
    UITextInteractionAssistant* _interactionAssistant;
    UIView* _inputView;
    UIView* _inputAccessoryView;
    UITextFieldAtomBackgroundView* _atomBackgroundView;
    {?="verticallyCenterText"b1"isAnimating"b4"inactiveHasDimAppearance"b1"becomesFirstResponderOnClearButtonTap"b1"clearsPlaceholderOnBeginEditing"b1"adjustsFontSizeToFitWidth"b1"fieldEditorAttached"b1"canBecomeFirstResponder"b1"shouldSuppressShouldBeginEditing"b1"inResignFirstResponder"b1"undoDisabled"b1"explicitAlignment"b1"implementsCustomDrawing"b1"needsClearing"b1"suppressContentChangedNotification"b1"allowsEditingTextAttributes"b1"usesAttributedText"b1"backgroundViewState"b2"clearingBehavior"b2} _textFieldFlags;
    BOOL _deferringBecomeFirstResponder;
    BOOL _avoidBecomeFirstResponder;
    BOOL _setSelectionRangeAfterFieldEditorIsAttached;
    NSLayoutConstraint* _baselineLayoutConstraint;
    _UIBaselineLayoutStrut* _baselineLayoutLabel;
}
 + (BOOL) _isDisplayingShortcutViewController;
 + (BOOL) _isCompatibilityTextField;

 - (void) setProgress:(float)a ;
 - (void) dealloc;
 - (void) setAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) setDelegate:(id)a ;
 - (BOOL) respondsToSelector:(SEL)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (id) forwardingTargetForSelector:(SEL)a ;
 - (void) _populateArchivedSubviews:(id)a ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a ;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (id) _backgroundView;
 - (void) setTextAlignment:(long long)a ;
 - (void) setAttributedText:(id)a ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (id) _inputController;
 - (BOOL) canPerformAction:(SEL)a withSender:(id)b ;
 - (void) _physicalButtonsBegan:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsEnded:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsCancelled:(id)a withEvent:(id)b ;
 - (void) increaseSize:(id)a ;
 - (void) decreaseSize:(id)a ;
 - (void) encodeRestorableStateWithCoder:(id)a ;
 - (void) decodeRestorableStateWithCoder:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _responderExternalTouchRectForWindow:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _responderSelectionRectForWindow:(id)a ;
 - (void) setTextColor:(id)a ;
 - (void) setFont:(id)a ;
 - (void) setText:(id)a ;
 - (void) _windowBecameKey;
 - (void) _encodeBackgroundColorWithCoder:(id)a ;
 - (BOOL) _canDrawContent;
 - (BOOL) canBecomeFirstResponder;
 - (void) tintColorDidChange;
 - (void) willMoveToWindow:(id)a ;
 - (void) _switchToLayoutEngine:(id)a ;
 - (id) _scriptingInfo;
 - (void) setContentVerticalAlignment:(long long)a ;
 - (id) attributedText;
 - (void) _updateLabel;
 - (void) setAdjustsFontSizeToFitWidth:(BOOL)a ;
 - (BOOL) adjustsFontSizeToFitWidth;
 - (BOOL) isEditing;
 - (id) textLabel;
 - (id) _fieldEditor;
 - (BOOL) _shouldObscureInput;
 - ({CGPoint=dd}) _originForTextFieldLabel:(id)a ;
 - (BOOL) _isPasscodeStyle;
 - (id) interactionAssistant;
 - (id) selectionView;
 - (BOOL) keyboardInput:(id)a shouldInsertText:(id)b isMarkedText:(BOOL)c ;
 - (BOOL) keyboardInput:(id)a shouldReplaceTextInRange:({_NSRange=QQ})b replacementText:(id)c ;
 - (BOOL) keyboardInputShouldDelete:(id)a ;
 - (BOOL) keyboardInputChanged:(id)a ;
 - (void) keyboardInputChangedSelection:(id)a ;
 - (void) fieldEditorDidChange:(id)a ;
 - ({_NSRange=QQ}) fieldEditor:(id)a willChangeSelectionFromCharacterRange:({_NSRange=QQ})b toCharacterRange:({_NSRange=QQ})c ;
 - (BOOL) fieldEditor:(id)a shouldInsertText:(id)b replacingRange:({_NSRange=QQ})c ;
 - (void) _sanitizeText:(id)a ;
 - (void) selectAllFromFieldEditor:(id)a ;
 - (id) textColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionClipRect;
 - (void) cancelAutoscroll;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) textInputView;
 - (void) willDetachFieldEditor:(id)a ;
 - (void) setTypingAttributes:(id)a ;
 - (void) takeTraitsFrom:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editRect;
 - (void) willAttachFieldEditor:(id)a ;
 - (void) attachFieldEditor:(id)a ;
 - (long long) textAlignment;
 - (id) beginningOfDocument;
 - (id) endOfDocument;
 - (id) textRangeFromPosition:(id)a toPosition:(id)b ;
 - (id) textInRange:(id)a ;
 - (id) inputDelegate;
 - (void) setSelectedTextRange:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectForPosition:(id)a ;
 - (void) _scrollRangeToVisible:({_NSRange=QQ})a animated:(BOOL)b ;
 - (BOOL) drawsAsAtom;
 - (int) atomStyle;
 - (BOOL) hasText;
 - (void) clearText;
 - (double) _passcodeStyleAlpha;
 - (void) deleteBackward;
 - (void) replaceRange:(id)a withText:(id)b ;
 - (void) replaceRangeWithTextWithoutClosingTyping:(id)a replacementText:(id)b ;
 - (id) selectedTextRange;
 - (id) markedTextRange;
 - (id) markedTextStyle;
 - (void) setMarkedTextStyle:(id)a ;
 - (void) unmarkText;
 - (id) positionFromPosition:(id)a offset:(long long)b ;
 - (id) positionFromPosition:(id)a inDirection:(long long)b offset:(long long)c ;
 - (long long) comparePosition:(id)a toPosition:(id)b ;
 - (long long) offsetFromPosition:(id)a toPosition:(id)b ;
 - (id) positionWithinRange:(id)a farthestInDirection:(long long)b ;
 - (id) characterRangeByExtendingPosition:(id)a inDirection:(long long)b ;
 - (void) setInputDelegate:(id)a ;
 - (id) tokenizer;
 - (long long) baseWritingDirectionForPosition:(id)a inDirection:(long long)b ;
 - (void) setBaseWritingDirection:(long long)a forRange:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) firstRectForRange:(id)a ;
 - (id) selectionRectsForRange:(id)a ;
 - (id) closestPositionToPoint:({CGPoint=dd})a ;
 - (id) closestPositionToPoint:({CGPoint=dd})a withinRange:(id)b ;
 - (id) characterRangeAtPoint:({CGPoint=dd})a ;
 - (void) insertDictationResult:(id)a withCorrectionIdentifier:(id)b ;
 - (id) insertDictationResultPlaceholder;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDictationResultPlaceholder:(id)a ;
 - (void) removeDictationResultPlaceholder:(id)a willInsertResult:(BOOL)b ;
 - (id) rangeWithTextAlternatives:(^@)a atPosition:(id)b ;
 - (id) metadataDictionariesForDictationResults;
 - (void) beginSelectionChange;
 - (void) endSelectionChange;
 - (id) textStylingAtPosition:(id)a inDirection:(long long)b ;
 - (void) setKeyboardAppearance:(long long)a ;
 - (void) startAutoscroll:({CGPoint=dd})a ;
 - (void) selectAll;
 - ({_NSRange=QQ}) selectionRange;
 - (unsigned long long) characterOffsetAtPoint:({CGPoint=dd})a ;
 - (BOOL) hasMarkedText;
 - (void) setPlaceholder:(id)a ;
 - (void) setAnimating:(BOOL)a ;
 - (void) _finishResignFirstResponder;
 - (void) _becomeFirstResponder;
 - (void) _resignFirstResponder;
 - (BOOL) canResignFirstResponder;
 - (id) inputView;
 - (id) inputAccessoryView;
 - (BOOL) _requiresKeyboardResetOnReload;
 - (id) viewForBaselineLayout;
 - (void) setLabel:(id)a ;
 - (void) setAllowsEditingTextAttributes:(BOOL)a ;
 - (BOOL) allowsEditingTextAttributes;
 - (id) _proxyTextInput;
 - (void) setInputView:(id)a ;
 - (void) setInputAccessoryView:(id)a ;
 - (void) selectAll:(id)a ;
 - (void) setClearsOnInsertion:(BOOL)a ;
 - (void) layoutTilesNow;
 - (void) makeTextWritingDirectionRightToLeft:(id)a ;
 - (void) makeTextWritingDirectionLeftToRight:(id)a ;
 - (void) replace:(id)a ;
 - (void) cut:(id)a ;
 - (void) copy:(id)a ;
 - (void) paste:(id)a ;
 - (void) _define:(id)a ;
 - (void) _addShortcut:(id)a ;
 - (void) toggleBoldface:(id)a ;
 - (void) toggleItalics:(id)a ;
 - (void) toggleUnderline:(id)a ;
 - (void) _showTextStyleOptions:(id)a ;
 - ({CGPoint=dd}) constrainedPoint:({CGPoint=dd})a ;
 - (BOOL) clearsOnInsertion;
 - (void) disableClearsOnInsertion;
 - (void) select:(id)a ;
 - (void) _promptForReplace:(id)a ;
 - (void) _transliterateChinese:(id)a ;
 - (id) automaticallySelectedOverlay;
 - (BOOL) _isDisplayingReferenceLibraryViewController;
 - (void) drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setShadowBlur:(double)a ;
 - (double) shadowBlur;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setIcon:(id)a ;
 - (void) setBorderStyle:(long long)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) iconRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) _placeholderColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _availableTextRectExcludingButtonsForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setPaddingTop:(float)a paddingLeft:(float)b ;
 - (BOOL) _shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
 - (void) setLeftView:(id)a ;
 - (void) setRightView:(id)a ;
 - (id) leftView;
 - (id) rightView;
 - (void) setContinuousSpellCheckingEnabled:(BOOL)a ;
 - (void) _insertAttributedTextWithoutClosingTyping:(id)a ;
 - (void) _clearButtonClicked:(id)a ;
 - (void) _deleteBackwardAndNotify:(BOOL)a ;
 - (void) setUndoEnabled:(BOOL)a ;
 - (void) setTextCentersVertically:(BOOL)a ;
 - (void) setTextCentersHorizontally:(BOOL)a ;
 - (id) background;
 - (void) setBackground:(id)a ;
 - (id) placeholder;
 - ({CGSize=dd}) _leftViewOffset;
 - (void) _setLeftViewOffset:({CGSize=dd})a ;
 - ({CGSize=dd}) clearButtonOffset;
 - (void) setClearButtonOffset:({CGSize=dd})a ;
 - (float) paddingTop;
 - (void) setPaddingTop:(float)a ;
 - (void) setRightViewMode:(long long)a ;
 - (void) _setRightViewOffset:({CGSize=dd})a ;
 - (BOOL) _partsShouldBeMini;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) leftViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) _systemBackgroundView;
 - (void) __resumeBecomeFirstResponder;
 - (void) _activateSelectionView;
 - (id) _placeholderLabel;
 - (void) setLeftViewMode:(long long)a ;
 - (void) setDisabledBackground:(id)a ;
 - (void) setClearButtonMode:(long long)a ;
 - (id) searchText;
 - (void) _setEnabled:(BOOL)a animated:(BOOL)b ;
 - (void) setPaddingLeft:(float)a ;
 - (id) _clearButton;
 - (void) _updateButtons;
 - (id) _clearButtonImageForState:(unsigned long long)a ;
 - (float) paddingLeft;
 - (BOOL) _showsClearButtonWhenNonEmpty:(BOOL)a ;
 - (BOOL) _fieldEditorAttached;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) placeholderRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGSize=dd}) _clearButtonSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) clearButtonRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _availableTextRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a forEditing:(BOOL)b ;
 - (BOOL) _hasSuffixField;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _suffixFrame;
 - (BOOL) _showsLeftView;
 - (long long) _currentTextAlignment;
 - (float) paddingRight;
 - (void) _updateBackgroundViewsAnimated:(BOOL)a ;
 - (void) _clearBackgroundViews;
 - (long long) _suffixLabelTextAlignment;
 - (Class) _placeholderLabelClass;
 - (Class) _systemBackgroundViewClass;
 - (BOOL) isAccessibilityElementByDefault;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (id) _text;
 - (int) clearingBehavior;
 - (void) setDrawsAsAtom:(BOOL)a ;
 - (void) setClearingBehavior:(int)a ;
 - (BOOL) _useGesturesForEditableContent;
 - (id) _textInputViewForAddingGestureRecognizers;
 - (void) _setSuffix:(id)a withColor:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) closestCaretRectInMarkedTextRangeForPoint:({CGPoint=dd})a ;
 - (unsigned long long) offsetInMarkedTextForSelection:(id)a ;
 - (float) paddingBottom;
 - (void) setPaddingBottom:(float)a ;
 - (void) setPaddingRight:(float)a ;
 - (void) setClearsOnBeginEditing:(BOOL)a ;
 - (id) _placeholderView;
 - (BOOL) _wantsBaselineUpdatingFollowingConstraintsPass;
 - (void) _updateBaselineInformationDependentOnBounds;
 - ({CGSize=dd}) _textSize;
 - (void) _selectionMayChange:(id)a ;
 - (void) setAttributedPlaceholder:(id)a ;
 - (id) attributedPlaceholder;
 - (BOOL) _inPopover;
 - (void) _drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forLabel:(id)b ;
 - (void) setAtomStyle:(int)a ;
 - (void) _setBaselineLayoutConstraint:(id)a ;
 - (id) createTextLabelWithTextColor:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForLabel:(id)a inTextRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (id) createPlaceholderLabelWithFont:(id)a andTextAlignment:(long long)b ;
 - (void) _updateTextLabel;
 - (BOOL) clearsOnBeginEditing;
 - (void) _stopObservingFieldEditorScroll;
 - (void) _setNeedsStyleRecalc;
 - (void) _sizeChanged:(BOOL)a ;
 - ({CGSize=dd}) _textSizeUsingFullFontSize:(BOOL)a ;
 - (void) _createBaselineLayoutLabelIfNecessary;
 - (long long) clearButtonMode;
 - (id) clearButton;
 - (BOOL) _shouldEndEditing;
 - (void) scrollTextFieldToVisible;
 - (void) _initialScrollDidFinish:(id)a ;
 - (void) setSelectionRange:({_NSRange=QQ})a ;
 - (id) customOverlayContainer;
 - (void) _syncTypingAttributesWithDefaultAttribute:(id)a ;
 - (double) actualMinimumFontSize;
 - (float) _marginTopForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) _copyFont:(id)a newSize:(float)b maxSize:(float)c ;
 - (void) _updateAtomTextColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) clearButtonRect;
 - (BOOL) _showsClearButton:(BOOL)a ;
 - (BOOL) _showsRightView;
 - (void) setFont:(id)a fullFontSize:(float)b ;
 - (BOOL) _heightShouldBeMini;
 - (long long) borderStyle;
 - (BOOL) _hasContent;
 - (BOOL) _showsAtomBackground;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _atomBackgroundViewFrame;
 - (BOOL) _showsClearButtonWhenEmpty;
 - (long long) leftViewMode;
 - (long long) rightViewMode;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _baselineLeftViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (double) _baselineLayoutConstraintConstantForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _setUpBaselineLayoutConstraintsForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) _isShowingPlaceholder;
 - (void) _updatePlaceholderPosition;
 - (void) _updateAtomBackground;
 - (void) _updateAutosizeStyleIfNeeded;
 - (BOOL) clearsPlaceholderOnBeginEditing;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _prefixFrame;
 - (void) _updateForPasscodeAppearance;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) borderRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) _attributedText;
 - (BOOL) _textNeedsSanitizing:(id)a ;
 - (void) finishedSettingTextOrAttributedText;
 - (void) _setAttributedText:(id)a onFieldEditorAndSetCaretSelectionAfterText:(BOOL)b ;
 - (void) _invalidateBaselineLayoutConstraints;
 - (void) createPlaceholderIfNecessary;
 - (void) finishedSettingPlaceholder;
 - (float) _marginTop;
 - (void) drawPlaceholderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawSuffixInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawPrefixInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _applicationResuming:(id)a ;
 - (void) _endedEditing;
 - (void) drawBorder:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) _implementsCustomDrawing;
 - (BOOL) isUndoEnabled;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustedCaretRectForCaretRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _createInteractionAssistant;
 - (BOOL) _isShowingPrefix;
 - (id) actualFont;
 - ({CGPoint=dd}) _scrollOffset;
 - ({CGSize=dd}) _rightViewOffset;
 - (void) _setSystemBackgroundViewActive:(BOOL)a ;
 - (id) _textLabelView;
 - (void) setDefaultTextAttributes:(id)a ;
 - (id) defaultTextAttributes;
 - (void) _updateSuffix:(id)a ;
 - (void) _setPrefix:(id)a ;
 - (void) setClearsPlaceholderOnBeginEditing:(BOOL)a ;
 - (void) fieldEditorDidChangeSelection:(id)a ;
 - (id) _dictationInterpretations;
 - (void) setAutoresizesTextToFit:(BOOL)a ;
 - (void) setTextAutorresizesToFit:(BOOL)a ;
 - (void) setClearButtonStyle:(int)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRect;
 - (void) setInactiveHasDimAppearance:(BOOL)a ;
 - (void) _clearSelectionUI;
 - (void) _resetSelectionUI;
 - (void) setBecomesFirstResponderOnClearButtonTap:(BOOL)a ;
 - (void) setLabelOffset:(float)a ;
 - (id) selectedAttributedText;
 - (void) _setBackgroundStrokeColor:(id)a ;
 - (void) _setBackgroundFillColor:(id)a ;
 - (void) _setBackgroundStrokeWidth:(double)a ;
 - (id) _baselineLayoutConstraint;
 - (id) _baselineLayoutLabel;
 - (void) _setBaselineLayoutLabel:(id)a ;
 - (id) disabledBackground;
 - (void) _setPasscodeStyleAlpha:(double)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (void) setShadowOffset:({CGSize=dd})a ;
 - (void) setShadowColor:(id)a ;
 - (void) setBackgroundColor:(id)a ;
 - (id) typingAttributes;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (double) minimumFontSize;
 - (id) webView;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGSize=dd}) shadowOffset;
 - (id) shadowColor;
 - (id) backgroundColor;
 - (id) font;
 - (id) selectedText;
 - (id) textInputTraits;
 - (void) setSecureTextEntry:(BOOL)a ;
 - (BOOL) isEditable;
 - (id) supportedPasteboardTypesForCurrentSelection;
 - (id) documentFragmentForPasteboardItemAtIndex:(long long)a ;
 - (id) undoManager;
 - (void) setMarkedText:(id)a selectedRange:({_NSRange=QQ})b ;
 - (void) insertText:(id)a ;
 - (BOOL) hasSelection;
 - (void) setMinimumFontSize:(double)a ;
 - (id) text;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setEnabled:(BOOL)a ;


@end

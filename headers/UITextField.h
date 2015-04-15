
@protocol UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding;
@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding> {

    @"_UICascadingTextStorage" _textStorage;
    q _borderStyle;
    d _minimumFontSize;
    id _delegate;
    @"UIImage" _background;
    @"UIImage" _disabledBackground;
    q _clearButtonMode;
    @"UIView" _leftView;
    q _leftViewMode;
    @"UIView" _rightView;
    q _rightViewMode;
    @"UITextInputTraits" _traits;
    @"UITextInputTraits" _nonAtomTraits;
    d _fullFontSize;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _padding;
    {_NSRange="location"Q"length"Q} _selectionRangeWhenNotEditing;
    i _scrollXOffset;
    i _scrollYOffset;
    f _progress;
    @"UIButton" _clearButton;
    {CGSize="width"d"height"d} _clearButtonOffset;
    {CGSize="width"d"height"d} _leftViewOffset;
    {CGSize="width"d"height"d} _rightViewOffset;
    @"UITextFieldBorderView" _backgroundView;
    @"UITextFieldBorderView" _disabledBackgroundView;
    @"UITextFieldBackgroundView" _systemBackgroundView;
    @"UITextFieldLabel" _displayLabel;
    @"UITextFieldLabel" _placeholderLabel;
    @"UITextFieldLabel" _suffixLabel;
    @"UITextFieldLabel" _prefixLabel;
    @"UIImageView" _iconView;
    @"UILabel" _label;
    d _labelOffset;
    @"UITextInteractionAssistant" _interactionAssistant;
    @"UIView" _inputView;
    @"UIView" _inputAccessoryView;
    @"UITextFieldAtomBackgroundView" _atomBackgroundView;
    {?="verticallyCenterText"b1"isAnimating"b4"inactiveHasDimAppearance"b1"becomesFirstResponderOnClearButtonTap"b1"clearsPlaceholderOnBeginEditing"b1"adjustsFontSizeToFitWidth"b1"fieldEditorAttached"b1"canBecomeFirstResponder"b1"shouldSuppressShouldBeginEditing"b1"inResignFirstResponder"b1"undoDisabled"b1"explicitAlignment"b1"implementsCustomDrawing"b1"needsClearing"b1"suppressContentChangedNotification"b1"allowsEditingTextAttributes"b1"usesAttributedText"b1"backgroundViewState"b2"clearingBehavior"b2} _textFieldFlags;
    BOOL _deferringBecomeFirstResponder;
    BOOL _avoidBecomeFirstResponder;
    BOOL _setSelectionRangeAfterFieldEditorIsAttached;
    @"NSLayoutConstraint" _baselineLayoutConstraint;
    @"_UIBaselineLayoutStrut" _baselineLayoutLabel;
}
 + (BOOL) _isDisplayingShortcutViewController;
 + (BOOL) _isCompatibilityTextField;

 - (void) setProgress:(f)a;
 - (void) dealloc;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) setDelegate:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (void) _populateArchivedSubviews:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) _backgroundView;
 - (void) setTextAlignment:(q)a;
 - (void) setAttributedText:(id)a;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) _inputController;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (void) increaseSize:(id)a;
 - (void) decreaseSize:(id)a;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _responderExternalTouchRectForWindow:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _responderSelectionRectForWindow:(id)a;
 - (void) setTextColor:(id)a;
 - (void) setFont:(id)a;
 - (void) setText:(id)a;
 - (void) _windowBecameKey;
 - (void) _encodeBackgroundColorWithCoder:(id)a;
 - (BOOL) _canDrawContent;
 - (BOOL) canBecomeFirstResponder;
 - (void) tintColorDidChange;
 - (void) willMoveToWindow:(id)a;
 - (void) _switchToLayoutEngine:(id)a;
 - (id) _scriptingInfo;
 - (void) setContentVerticalAlignment:(q)a;
 - (id) attributedText;
 - (void) _updateLabel;
 - (void) setAdjustsFontSizeToFitWidth:(BOOL)a;
 - (BOOL) adjustsFontSizeToFitWidth;
 - (BOOL) isEditing;
 - (id) textLabel;
 - (id) _fieldEditor;
 - (BOOL) _shouldObscureInput;
 - ({CGPoint=dd}) _originForTextFieldLabel:(id)a;
 - (BOOL) _isPasscodeStyle;
 - (id) interactionAssistant;
 - (id) selectionView;
 - (BOOL) keyboardInput:(id)ashouldInsertText:(id)bisMarkedText:(BOOL)c;
 - (BOOL) keyboardInput:(id)ashouldReplaceTextInRange:({_NSRange=QQ})breplacementText:(id)c;
 - (BOOL) keyboardInputShouldDelete:(id)a;
 - (BOOL) keyboardInputChanged:(id)a;
 - (void) keyboardInputChangedSelection:(id)a;
 - (void) fieldEditorDidChange:(id)a;
 - ({_NSRange=QQ}) fieldEditor:(id)awillChangeSelectionFromCharacterRange:({_NSRange=QQ})btoCharacterRange:({_NSRange=QQ})c;
 - (BOOL) fieldEditor:(id)ashouldInsertText:(id)breplacingRange:({_NSRange=QQ})c;
 - (void) _sanitizeText:(id)a;
 - (void) selectAllFromFieldEditor:(id)a;
 - (id) textColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionClipRect;
 - (void) cancelAutoscroll;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) textInputView;
 - (void) willDetachFieldEditor:(id)a;
 - (void) setTypingAttributes:(id)a;
 - (void) takeTraitsFrom:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editRect;
 - (void) willAttachFieldEditor:(id)a;
 - (void) attachFieldEditor:(id)a;
 - (q) textAlignment;
 - (id) beginningOfDocument;
 - (id) endOfDocument;
 - (id) textRangeFromPosition:(id)atoPosition:(id)b;
 - (id) textInRange:(id)a;
 - (id) inputDelegate;
 - (void) setSelectedTextRange:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) caretRectForPosition:(id)a;
 - (void) _scrollRangeToVisible:({_NSRange=QQ})aanimated:(BOOL)b;
 - (BOOL) drawsAsAtom;
 - (i) atomStyle;
 - (BOOL) hasText;
 - (void) clearText;
 - (d) _passcodeStyleAlpha;
 - (void) deleteBackward;
 - (void) replaceRange:(id)awithText:(id)b;
 - (void) replaceRangeWithTextWithoutClosingTyping:(id)areplacementText:(id)b;
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
 - (id) rangeWithTextAlternatives:(^@)aatPosition:(id)b;
 - (id) metadataDictionariesForDictationResults;
 - (void) beginSelectionChange;
 - (void) endSelectionChange;
 - (id) textStylingAtPosition:(id)ainDirection:(q)b;
 - (void) setKeyboardAppearance:(q)a;
 - (void) startAutoscroll:({CGPoint=dd})a;
 - (void) selectAll;
 - ({_NSRange=QQ}) selectionRange;
 - (Q) characterOffsetAtPoint:({CGPoint=dd})a;
 - (BOOL) hasMarkedText;
 - (void) setPlaceholder:(id)a;
 - (void) setAnimating:(BOOL)a;
 - (void) _finishResignFirstResponder;
 - (void) _becomeFirstResponder;
 - (void) _resignFirstResponder;
 - (BOOL) canResignFirstResponder;
 - (id) inputView;
 - (id) inputAccessoryView;
 - (BOOL) _requiresKeyboardResetOnReload;
 - (id) viewForBaselineLayout;
 - (void) setLabel:(id)a;
 - (void) setAllowsEditingTextAttributes:(BOOL)a;
 - (BOOL) allowsEditingTextAttributes;
 - (id) _proxyTextInput;
 - (void) setInputView:(id)a;
 - (void) setInputAccessoryView:(id)a;
 - (void) selectAll:(id)a;
 - (void) setClearsOnInsertion:(BOOL)a;
 - (void) layoutTilesNow;
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
 - ({CGPoint=dd}) constrainedPoint:({CGPoint=dd})a;
 - (BOOL) clearsOnInsertion;
 - (void) disableClearsOnInsertion;
 - (void) select:(id)a;
 - (void) _promptForReplace:(id)a;
 - (void) _transliterateChinese:(id)a;
 - (id) automaticallySelectedOverlay;
 - (BOOL) _isDisplayingReferenceLibraryViewController;
 - (void) drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setShadowBlur:(d)a;
 - (d) shadowBlur;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setIcon:(id)a;
 - (void) setBorderStyle:(q)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) iconRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _placeholderColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _availableTextRectExcludingButtonsForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setPaddingTop:(f)apaddingLeft:(f)b;
 - (BOOL) _shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
 - (void) setLeftView:(id)a;
 - (void) setRightView:(id)a;
 - (id) leftView;
 - (id) rightView;
 - (void) setContinuousSpellCheckingEnabled:(BOOL)a;
 - (void) _insertAttributedTextWithoutClosingTyping:(id)a;
 - (void) _clearButtonClicked:(id)a;
 - (void) _deleteBackwardAndNotify:(BOOL)a;
 - (void) setUndoEnabled:(BOOL)a;
 - (void) setTextCentersVertically:(BOOL)a;
 - (void) setTextCentersHorizontally:(BOOL)a;
 - (id) background;
 - (void) setBackground:(id)a;
 - (id) placeholder;
 - ({CGSize=dd}) _leftViewOffset;
 - (void) _setLeftViewOffset:({CGSize=dd})a;
 - ({CGSize=dd}) clearButtonOffset;
 - (void) setClearButtonOffset:({CGSize=dd})a;
 - (f) paddingTop;
 - (void) setPaddingTop:(f)a;
 - (void) setRightViewMode:(q)a;
 - (void) _setRightViewOffset:({CGSize=dd})a;
 - (BOOL) _partsShouldBeMini;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) leftViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _systemBackgroundView;
 - (void) __resumeBecomeFirstResponder;
 - (void) _activateSelectionView;
 - (id) _placeholderLabel;
 - (void) setLeftViewMode:(q)a;
 - (void) setDisabledBackground:(id)a;
 - (void) setClearButtonMode:(q)a;
 - (id) searchText;
 - (void) _setEnabled:(BOOL)aanimated:(BOOL)b;
 - (void) setPaddingLeft:(f)a;
 - (id) _clearButton;
 - (void) _updateButtons;
 - (id) _clearButtonImageForState:(Q)a;
 - (f) paddingLeft;
 - (BOOL) _showsClearButtonWhenNonEmpty:(BOOL)a;
 - (BOOL) _fieldEditorAttached;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) placeholderRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) _clearButtonSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) clearButtonRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _availableTextRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})aforEditing:(BOOL)b;
 - (BOOL) _hasSuffixField;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _suffixFrame;
 - (BOOL) _showsLeftView;
 - (q) _currentTextAlignment;
 - (f) paddingRight;
 - (void) _updateBackgroundViewsAnimated:(BOOL)a;
 - (void) _clearBackgroundViews;
 - (q) _suffixLabelTextAlignment;
 - (Class) _placeholderLabelClass;
 - (Class) _systemBackgroundViewClass;
 - (BOOL) isAccessibilityElementByDefault;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (id) _text;
 - (i) clearingBehavior;
 - (void) setDrawsAsAtom:(BOOL)a;
 - (void) setClearingBehavior:(i)a;
 - (BOOL) _useGesturesForEditableContent;
 - (id) _textInputViewForAddingGestureRecognizers;
 - (void) _setSuffix:(id)awithColor:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) closestCaretRectInMarkedTextRangeForPoint:({CGPoint=dd})a;
 - (Q) offsetInMarkedTextForSelection:(id)a;
 - (f) paddingBottom;
 - (void) setPaddingBottom:(f)a;
 - (void) setPaddingRight:(f)a;
 - (void) setClearsOnBeginEditing:(BOOL)a;
 - (id) _placeholderView;
 - (BOOL) _wantsBaselineUpdatingFollowingConstraintsPass;
 - (void) _updateBaselineInformationDependentOnBounds;
 - ({CGSize=dd}) _textSize;
 - (void) _selectionMayChange:(id)a;
 - (void) setAttributedPlaceholder:(id)a;
 - (id) attributedPlaceholder;
 - (BOOL) _inPopover;
 - (void) _drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforLabel:(id)b;
 - (void) setAtomStyle:(i)a;
 - (void) _setBaselineLayoutConstraint:(id)a;
 - (id) createTextLabelWithTextColor:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameForLabel:(id)ainTextRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (id) createPlaceholderLabelWithFont:(id)aandTextAlignment:(q)b;
 - (void) _updateTextLabel;
 - (BOOL) clearsOnBeginEditing;
 - (void) _stopObservingFieldEditorScroll;
 - (void) _setNeedsStyleRecalc;
 - (void) _sizeChanged:(BOOL)a;
 - ({CGSize=dd}) _textSizeUsingFullFontSize:(BOOL)a;
 - (void) _createBaselineLayoutLabelIfNecessary;
 - (q) clearButtonMode;
 - (id) clearButton;
 - (BOOL) _shouldEndEditing;
 - (void) scrollTextFieldToVisible;
 - (void) _initialScrollDidFinish:(id)a;
 - (void) setSelectionRange:({_NSRange=QQ})a;
 - (id) customOverlayContainer;
 - (void) _syncTypingAttributesWithDefaultAttribute:(id)a;
 - (d) actualMinimumFontSize;
 - (f) _marginTopForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _copyFont:(id)anewSize:(f)bmaxSize:(f)c;
 - (void) _updateAtomTextColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) clearButtonRect;
 - (BOOL) _showsClearButton:(BOOL)a;
 - (BOOL) _showsRightView;
 - (void) setFont:(id)afullFontSize:(f)b;
 - (BOOL) _heightShouldBeMini;
 - (q) borderStyle;
 - (BOOL) _hasContent;
 - (BOOL) _showsAtomBackground;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _atomBackgroundViewFrame;
 - (BOOL) _showsClearButtonWhenEmpty;
 - (q) leftViewMode;
 - (q) rightViewMode;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _baselineLeftViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) _baselineLayoutConstraintConstantForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setUpBaselineLayoutConstraintsForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _isShowingPlaceholder;
 - (void) _updatePlaceholderPosition;
 - (void) _updateAtomBackground;
 - (void) _updateAutosizeStyleIfNeeded;
 - (BOOL) clearsPlaceholderOnBeginEditing;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _prefixFrame;
 - (void) _updateForPasscodeAppearance;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) borderRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _attributedText;
 - (BOOL) _textNeedsSanitizing:(id)a;
 - (void) finishedSettingTextOrAttributedText;
 - (void) _setAttributedText:(id)aonFieldEditorAndSetCaretSelectionAfterText:(BOOL)b;
 - (void) _invalidateBaselineLayoutConstraints;
 - (void) createPlaceholderIfNecessary;
 - (void) finishedSettingPlaceholder;
 - (f) _marginTop;
 - (void) drawPlaceholderInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawSuffixInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawPrefixInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _applicationResuming:(id)a;
 - (void) _endedEditing;
 - (void) drawBorder:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _implementsCustomDrawing;
 - (BOOL) isUndoEnabled;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustedCaretRectForCaretRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _createInteractionAssistant;
 - (BOOL) _isShowingPrefix;
 - (id) actualFont;
 - ({CGPoint=dd}) _scrollOffset;
 - ({CGSize=dd}) _rightViewOffset;
 - (void) _setSystemBackgroundViewActive:(BOOL)a;
 - (id) _textLabelView;
 - (void) setDefaultTextAttributes:(id)a;
 - (id) defaultTextAttributes;
 - (void) _updateSuffix:(id)a;
 - (void) _setPrefix:(id)a;
 - (void) setClearsPlaceholderOnBeginEditing:(BOOL)a;
 - (void) fieldEditorDidChangeSelection:(id)a;
 - (id) _dictationInterpretations;
 - (void) setAutoresizesTextToFit:(BOOL)a;
 - (void) setTextAutorresizesToFit:(BOOL)a;
 - (void) setClearButtonStyle:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRect;
 - (void) setInactiveHasDimAppearance:(BOOL)a;
 - (void) _clearSelectionUI;
 - (void) _resetSelectionUI;
 - (void) setBecomesFirstResponderOnClearButtonTap:(BOOL)a;
 - (void) setLabelOffset:(f)a;
 - (id) selectedAttributedText;
 - (void) _setBackgroundStrokeColor:(id)a;
 - (void) _setBackgroundFillColor:(id)a;
 - (void) _setBackgroundStrokeWidth:(d)a;
 - (id) _baselineLayoutConstraint;
 - (id) _baselineLayoutLabel;
 - (void) _setBaselineLayoutLabel:(id)a;
 - (id) disabledBackground;
 - (void) _setPasscodeStyleAlpha:(d)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (void) setShadowOffset:({CGSize=dd})a;
 - (void) setShadowColor:(id)a;
 - (void) setBackgroundColor:(id)a;
 - (id) typingAttributes;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) minimumFontSize;
 - (id) webView;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) shadowOffset;
 - (id) shadowColor;
 - (id) backgroundColor;
 - (id) font;
 - (id) selectedText;
 - (id) textInputTraits;
 - (void) setSecureTextEntry:(BOOL)a;
 - (BOOL) isEditable;
 - (id) supportedPasteboardTypesForCurrentSelection;
 - (id) documentFragmentForPasteboardItemAtIndex:(q)a;
 - (id) undoManager;
 - (void) setMarkedText:(id)aselectedRange:({_NSRange=QQ})b;
 - (void) insertText:(id)a;
 - (BOOL) hasSelection;
 - (void) setMinimumFontSize:(d)a;
 - (id) text;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEnabled:(BOOL)a;


@end

@protocol WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching;
@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {

    WebHTMLViewPrivate _private;
}
 + (void) initialize;
 + (id) supportedMIMETypes;
 + (id) supportedNonImageMIMETypes;
 + (id) supportedImageMIMETypes;
 + (id) unsupportedTextMIMETypes;

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (void) close;
 - (void) viewWillMoveToWindow:(id)a;
 - (id) selectionView;
 - (void) unmarkText;
 - (void) selectAll;
 - (BOOL) hasMarkedText;
 - (void) selectAll:(id)a;
 - (void) makeTextWritingDirectionRightToLeft:(id)a;
 - (void) makeTextWritingDirectionLeftToRight:(id)a;
 - (void) cut:(id)a;
 - (void) copy:(id)a;
 - (void) paste:(id)a;
 - (void) toggleUnderline:(id)a;
 - (void) toggleBold:(id)a;
 - (void) toggleItalic:(id)a;
 - (BOOL) _beginPrintModeWithMinimumPageWidth:(double)aheight:(double)bmaximumPageWidth:(double)c;
 - (double) _adjustedBottomOfPageWithTop:(double)abottom:(double)blimit:(double)c;
 - (void) _endPrintMode;
 - (void) _frameOrBoundsChanged;
 - (void) delete:(id)a;
 - (id) selectionTextRects;
 - (^{CGImage=}) selectionImageForcingBlackText:(BOOL)a;
 - ({_NSRange=QQ}) markedRange;
 - (void) layout;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setScale:(float)a;
 - (id) hitTest:({CGPoint=dd})a;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) layoutIfNeeded;
 - (BOOL) isOpaque;
 - (void) drawLayer:(id)ainContext:(^{CGContext=})b;
 - ({_NSRange=QQ}) selectedRange;
 - (void) deleteBackward:(id)a;
 - (void) deleteForward:(id)a;
 - (void) dataSourceUpdated:(id)a;
 - (id) _frame;
 - (void) setDataSource:(id)a;
 - (void) setNeedsLayout:(BOOL)a;
 - (void) viewWillMoveToHostWindow:(id)a;
 - (void) viewDidMoveToHostWindow;
 - (id) _dataSource;
 - (void) _setToolTip:(id)a;
 - (void) attachRootLayer:(id)a;
 - (void) detachRootLayer;
 - (id) _webView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionRect;
 - (id) _documentRange;
 - (void) _selectionChanged;
 - (BOOL) _handleEditingKeyEvent:(^{KeyboardEvent=^^?{Weak<WebCore::JSDOMWrapper>=^{WeakImpl}}I{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}BBBBBBBS^{EventTarget}{RefPtr<WebCore::EventTarget>=^{EventTarget}}Q{RefPtr<WebCore::Event>=^{Event}}{RefPtr<WebCore::DOMWindow>=^{DOMWindow}}ib1b1b1b1{unique_ptr<WebCore::PlatformKeyboardEvent, std::__1::default_delete<WebCore::PlatformKeyboardEvent> >={__compressed_pair<WebCore::PlatformKeyboardEvent *, std::__1::default_delete<WebCore::PlatformKeyboardEvent> >=^{PlatformKeyboardEvent}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}Ib1B{Vector<WebCore::KeypressCommand, 0, WTF::CrashOnOverflow>=^{KeypressCommand}II}})a;
 - (void) moveUp:(id)a;
 - (void) moveDown:(id)a;
 - (void) insertBacktab:(id)a;
 - (void) insertTab:(id)a;
 - (void) insertNewline:(id)a;
 - (BOOL) supportsTextEncoding;
 - (id) selectedString;
 - (void) deselectAll;
 - (BOOL) _hasSelection;
 - (BOOL) _web_isDrawingIntoLayer;
 - (BOOL) _needsLayout;
 - (void) setMarkedText:(id)aselectedRange:({_NSRange=QQ})b;
 - (id) elementAtPoint:({CGPoint=dd})a;
 - (id) _pluginController;
 - (void) closeIfNotCurrentView;
 - (id) _selectedRange;
 - (BOOL) _shouldInsertText:(id)areplacingDOMRange:(id)bgivenAction:(long long)c;
 - (id) _topHTMLView;
 - (id) _frameView;
 - (BOOL) _shouldInsertFragment:(id)areplacingDOMRange:(id)bgivenAction:(long long)c;
 - (BOOL) _shouldReplaceSelectionWithText:(id)agivenAction:(long long)b;
 - (BOOL) _shouldDeleteRange:(id)a;
 - (void) _setMouseDownEvent:(id)a;
 - (BOOL) _isTopHTMLView;
 - (void) _web_updateLayoutAndStyleIfNeededRecursive;
 - (void) _layoutIfNeeded;
 - (void) _autoscroll;
 - (void) _stopAutoscrollTimer;
 - (BOOL) _hasSelectionOrInsertionPoint;
 - (BOOL) _isEditable;
 - (void) _clearLastHitViewIfSelf;
 - (BOOL) _isInScreenPaginationMode;
 - (void) _setPrinting:(BOOL)aminimumPageLogicalWidth:(float)blogicalHeight:(float)coriginalPageWidth:(float)doriginalPageHeight:(float)emaximumShrinkRatio:(float)fadjustViewSize:(BOOL)gpaginateScreenContent:(BOOL)h;
 - (BOOL) _isInPrintMode;
 - (void) _setAsideSubviews;
 - (void) _restoreSubviews;
 - (BOOL) _insideAnotherHTMLView;
 - (void) _startAutoscrollTimer:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _selectionRect;
 - (BOOL) _canEdit;
 - (BOOL) _canEditRichly;
 - (BOOL) _canAlterCurrentSelection;
 - (BOOL) _hasInsertionPoint;
 - (BOOL) _transparentBackground;
 - (void) _setTransparentBackground:(BOOL)a;
 - (id) _insertOrderedList;
 - (id) _insertUnorderedList;
 - (BOOL) _canIncreaseSelectionListLevel;
 - (BOOL) _canDecreaseSelectionListLevel;
 - (id) _increaseSelectionListLevel;
 - (id) _increaseSelectionListLevelOrdered;
 - (id) _increaseSelectionListLevelUnordered;
 - (void) _decreaseSelectionListLevel;
 - (BOOL) _hasHTMLDocument;
 - (BOOL) _isUsingAcceleratedCompositing;
 - (id) _compositingLayersHostingView;
 - (BOOL) _beginPrintModeWithPageWidth:(float)aheight:(float)bshrinkToFit:(BOOL)c;
 - (BOOL) _beginScreenPaginationModeWithPageSize:({CGSize=dd})ashrinkToFit:(BOOL)b;
 - (void) _endScreenPaginationMode;
 - (id) accessibilityRootElement;
 - (void) markedTextUpdate:(id)a;
 - (BOOL) callDelegateDoCommandBySelectorIfNeeded:(SEL)a;
 - ({Command=^{EditorInternalCommand}i{RefPtr<WebCore::Frame>=^{Frame}}}) coreCommandBySelector:(SEL)a;
 - ({Command=^{EditorInternalCommand}i{RefPtr<WebCore::Frame>=^{Frame}}}) coreCommandByName:(r*)a;
 - (void) executeCoreCommandBySelector:(SEL)a;
 - (BOOL) maintainsInactiveSelection;
 - (void) layoutToMinimumPageWidth:(float)aheight:(float)boriginalPageWidth:(float)coriginalPageHeight:(float)dmaximumShrinkRatio:(float)eadjustingViewSize:(BOOL)f;
 - (BOOL) searchFor:(id)adirection:(BOOL)bcaseSensitive:(BOOL)cwrap:(BOOL)dstartInSelection:(BOOL)e;
 - (void) drawSingleRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) clearFocus;
 - (id) accessibilityFocusedUIElement;
 - (id) accessibilityHitTest:({CGPoint=dd})a;
 - (id) _accessibilityParentForSubview:(id)a;
 - (void) selectWord:(id)a;
 - (void) _changeWordCaseWithSelector:(SEL)a;
 - (void) _updateControlTints;
 - (void) _windowChangedKeyState;
 - (BOOL) searchFor:(id)adirection:(BOOL)bcaseSensitive:(BOOL)cwrap:(BOOL)d;
 - (void) executeCoreCommandByName:(r*)a;
 - (void) alignCenter:(id)a;
 - (void) alignJustified:(id)a;
 - (void) alignLeft:(id)a;
 - (void) alignRight:(id)a;
 - (void) deleteBackwardByDecomposingPreviousCharacter:(id)a;
 - (void) deleteToBeginningOfLine:(id)a;
 - (void) deleteToBeginningOfParagraph:(id)a;
 - (void) deleteToEndOfLine:(id)a;
 - (void) deleteToEndOfParagraph:(id)a;
 - (void) deleteToMark:(id)a;
 - (void) deleteWordBackward:(id)a;
 - (void) deleteWordForward:(id)a;
 - (void) ignoreSpelling:(id)a;
 - (void) indent:(id)a;
 - (void) insertLineBreak:(id)a;
 - (void) insertNewlineIgnoringFieldEditor:(id)a;
 - (void) insertParagraphSeparator:(id)a;
 - (void) insertTabIgnoringFieldEditor:(id)a;
 - (void) makeTextWritingDirectionNatural:(id)a;
 - (void) moveBackward:(id)a;
 - (void) moveBackwardAndModifySelection:(id)a;
 - (void) moveDownAndModifySelection:(id)a;
 - (void) moveForward:(id)a;
 - (void) moveForwardAndModifySelection:(id)a;
 - (void) moveLeft:(id)a;
 - (void) moveLeftAndModifySelection:(id)a;
 - (void) moveParagraphBackwardAndModifySelection:(id)a;
 - (void) moveParagraphForwardAndModifySelection:(id)a;
 - (void) moveRight:(id)a;
 - (void) moveRightAndModifySelection:(id)a;
 - (void) moveToBeginningOfDocument:(id)a;
 - (void) moveToBeginningOfDocumentAndModifySelection:(id)a;
 - (void) moveToBeginningOfLine:(id)a;
 - (void) moveToBeginningOfLineAndModifySelection:(id)a;
 - (void) moveToBeginningOfParagraph:(id)a;
 - (void) moveToBeginningOfParagraphAndModifySelection:(id)a;
 - (void) moveToBeginningOfSentence:(id)a;
 - (void) moveToBeginningOfSentenceAndModifySelection:(id)a;
 - (void) moveToEndOfDocument:(id)a;
 - (void) moveToEndOfDocumentAndModifySelection:(id)a;
 - (void) moveToEndOfLine:(id)a;
 - (void) moveToEndOfLineAndModifySelection:(id)a;
 - (void) moveToEndOfParagraph:(id)a;
 - (void) moveToEndOfParagraphAndModifySelection:(id)a;
 - (void) moveToEndOfSentence:(id)a;
 - (void) moveToEndOfSentenceAndModifySelection:(id)a;
 - (void) moveToLeftEndOfLine:(id)a;
 - (void) moveToLeftEndOfLineAndModifySelection:(id)a;
 - (void) moveToRightEndOfLine:(id)a;
 - (void) moveToRightEndOfLineAndModifySelection:(id)a;
 - (void) moveUpAndModifySelection:(id)a;
 - (void) moveWordBackward:(id)a;
 - (void) moveWordBackwardAndModifySelection:(id)a;
 - (void) moveWordForward:(id)a;
 - (void) moveWordForwardAndModifySelection:(id)a;
 - (void) moveWordLeft:(id)a;
 - (void) moveWordLeftAndModifySelection:(id)a;
 - (void) moveWordRight:(id)a;
 - (void) moveWordRightAndModifySelection:(id)a;
 - (void) outdent:(id)a;
 - (void) overWrite:(id)a;
 - (void) pageDown:(id)a;
 - (void) pageDownAndModifySelection:(id)a;
 - (void) pageUp:(id)a;
 - (void) pageUpAndModifySelection:(id)a;
 - (void) pasteAsPlainText:(id)a;
 - (void) selectLine:(id)a;
 - (void) selectParagraph:(id)a;
 - (void) selectSentence:(id)a;
 - (void) selectToMark:(id)a;
 - (void) setMark:(id)a;
 - (void) subscript:(id)a;
 - (void) superscript:(id)a;
 - (void) swapWithMark:(id)a;
 - (void) transpose:(id)a;
 - (void) underline:(id)a;
 - (void) unscript:(id)a;
 - (void) yank:(id)a;
 - (void) yankAndSelect:(id)a;
 - (void) clearText:(id)a;
 - (void) jumpToSelection:(id)a;
 - (void) _web_makePluginSubviewsPerformSelector:(SEL)awithObject:(id)b;
 - (void) reapplyStyles;
 - (void) setNeedsToApplyStyles:(BOOL)a;
 - (BOOL) _isSelectionEvent:(id)a;
 - (void) centerSelectionInVisibleArea:(id)a;
 - (id) _emptyStyle;
 - (void) _applyStyleToSelection:(id)awithUndoAction:(int)b;
 - (void) uppercaseWord:(id)a;
 - (void) lowercaseWord:(id)a;
 - (void) capitalizeWord:(id)a;
 - (void) makeBaseWritingDirectionNatural:(id)a;
 - (BOOL) _wantsKeyDownForEvent:(id)a;
 - (void) _updateSelectionForInputManager;
 - (void) insertText:(id)a;
 - (void) doCommandBySelector:(SEL)a;
 - (BOOL) _canSmartCopyOrDelete;
 - (void) _executeSavedKeypressCommands;
 - (void) _destroyAllWebPlugins;
 - (unsigned long long) characterIndexForPoint:({CGPoint=dd})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) firstRectForCharacterRange:({_NSRange=QQ})a;
 - (long long) conversationIdentifier;
 - (BOOL) _findString:(id)aoptions:(unsigned long long)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) selectionImageRect;
 - (id) elementAtPoint:({CGPoint=dd})aallowShadowContent:(BOOL)b;
 - (unsigned long long) countMatchesForText:(id)ainDOMRange:(id)boptions:(unsigned long long)climit:(unsigned long long)dmarkMatches:(BOOL)e;
 - (void) setMarkedTextMatchesAreHighlighted:(BOOL)a;
 - (BOOL) markedTextMatchesAreHighlighted;
 - (void) unmarkAllTextMatches;
 - (id) rectsForTextMatches;
 - (BOOL) acceptsFirstResponder;
 - (void) mouseDown:(id)a;
 - (void) mouseUp:(id)a;
 - (void) scrollWheel:(id)a;
 - (void) viewWillDraw;
 - (void) addSubview:(id)a;
 - (void) mouseMoved:(id)a;
 - (void) keyDown:(id)a;
 - (void) keyUp:(id)a;
 - (void) touch:(id)a;
 - (BOOL) becomeFirstResponder;
 - (BOOL) resignFirstResponder;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) willRemoveSubview:(id)a;
 - (void) viewDidMoveToWindow;


@end

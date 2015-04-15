
@protocol UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate;
@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate> {

    @"UIWebFormAccessory" _accessory;
    @"NSObject<UIFormPeripheral>" _input;
    @"DOMNode" _currentAssistedNode;
    @"DOMNode" _assistedNodeStartingFocusRedirects;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _inputViewBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _addressViewBounds;
    d _lastAdjustmentForScroller;
    Q _audioSessionCategoryOverride;
    b1 _accessoryEnabled;
    b1 _forceInputView;
    b1 _formIsAutoFilling;
    b1 _inputViewObeysDOMFocus;
    b1 _allowDOMFocusRedirects;
    b1 _hasEditedTextField;
    b1 _alwaysDispatchesScrollEvents;
    @"UIWebTouchEventsGestureRecognizer" _webTouchEventsGestureRecognizer;
    @"UIWebFormDelegate" _formDelegate;
    @"UIResponder" _editingDelegateForEverythingExceptForms;
    Q _dispatchedTouchEvents;
    @"NSMutableArray" _deferredTouchEvents;
    @"NSHashTable" _activeHighlighters;
    @"NSMutableSet" _overflowScrollViewsPendingInsertion;
    @"NSMutableSet" _overflowScrollViewsPendingDeletion;
    @"NSMutableSet" _overflowScrollViews;
    @"NSLock" _pendingOverflowDataLock;
    @"NSMutableArray" _pendingOverflowScrolls;
    BOOL _pendingGeometryChangeAfterOverflowScroll;
    {?="all"@"NSMutableArray""html"@"NSMutableArray""javascript"@"NSMutableArray""css"@"NSMutableArray""error"@"NSMutableArray""warning"@"NSMutableArray""tip"@"NSMutableArray""log"@"NSMutableArray"} _messages;
    {?="view"@"UIWebPDFView""timer"@"NSTimer"} _pdf;
    @"<UIWebAutoFillDelegate>" _autoFillDelegate;
}
 + (void) initialize;
 + (id) getUIWebBrowserViewForWebFrame:(id)a;
 + (d) preferredScrollDecelerationFactor;

 - (void) dealloc;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (id) keyCommands;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (BOOL) _requiresKeyboardWhenFirstResponder;
 - (void) _didScroll;
 - (void) _keyboardWillShow:(id)a;
 - (void) _keyboardWillHide:(id)a;
 - (id) _editingDelegate;
 - (id) inputView;
 - (id) inputAccessoryView;
 - (id) _keyboardResponder;
 - (BOOL) _requiresKeyboardResetOnReload;
 - (id) _input;
 - (void) copy:(id)a;
 - (void) _promptForReplace:(id)a;
 - (void) _transliterateChinese:(id)a;
 - (void) acceptedAutoFillWord:(id)a;
 - (BOOL) isAutoFillMode;
 - (id) initWithWebView:(id)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) installGestureRecognizers;
 - (void) _updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
 - (void) _updateFixedPositioningObjectsLayoutDuringScroll;
 - (void) _resetFormDataForFrame:(id)a;
 - (void) _clearAllConsoleMessages;
 - (void) _updateFixedPositioningObjectsLayoutAfterScroll;
 - (void) _updateFixedPositionContent;
 - (id) formElement;
 - (id) _collectAdditionalSubviews;
 - (void) redrawScaledDocument;
 - (void) assistFormNode:(id)a;
 - (id) textFormElement;
 - (BOOL) playsNicelyWithGestures;
 - (id) textDocument;
 - (void) _beginAllowingFocusRedirects;
 - (void) _endAllowingFocusRedirects;
 - (BOOL) shouldIgnoreWebTouch;
 - (BOOL) isAnyTouchOverActiveArea:(id)a;
 - (BOOL) isDispatchingTouchEvents;
 - (BOOL) inputViewObeysDOMFocus;
 - (void) setInputViewObeysDOMFocus:(BOOL)a;
 - (void) set_editingDelegateForEverythingExceptForms:(id)a;
 - (void) _startURLificationIfNeededCoalesce:(BOOL)a;
 - (void) setAllowsInlineMediaPlayback:(BOOL)a;
 - (BOOL) allowsInlineMediaPlayback;
 - (void) setMediaPlaybackRequiresUserAction:(BOOL)a;
 - (BOOL) mediaPlaybackRequiresUserAction;
 - (void) rotateEnclosingScrollViewToFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _updateScrollerViewForInputView:(id)a;
 - (id) _currentAssistedNode;
 - (void) setAlwaysDispatchesScrollEvents:(BOOL)a;
 - (BOOL) alwaysDispatchesScrollEvents;
 - (void) setAudioSessionCategoryOverride:(I)a;
 - (void) setNetworkInterfaceName:(id)a;
 - (void) _keyboardDidHide:(id)a;
 - (void) _keyboardDidChangeFrame:(id)a;
 - (void) accessoryDone;
 - (id) autoFillDelegate;
 - (void) formDelegateTextDidChange;
 - (void) _webViewFormEditedStatusHasChanged:(id)a;
 - (BOOL) _isAutoFilling;
 - (BOOL) _hasSubviewContainingWebContent:(id)a;
 - (void) accessoryTab:(BOOL)a;
 - (void) accessoryAutoFill;
 - (void) accessoryClear;
 - (void) _startAssistingKeyboard;
 - (void) _stopAssistingKeyboard;
 - (void) _startAssistingNode:(id)a;
 - (void) _stopAssistingNode:(id)a;
 - (void) _keyboardWillChangeFrame:(id)a;
 - (void) _clearFormAutoFillStateForFrame:(id)a;
 - (void) set_accessory:(id)a;
 - (void) set_input:(id)a;
 - (void) set_currentAssistedNode:(id)a;
 - (void) _webTouchEventsRecognized:(id)a;
 - (BOOL) allowDOMFocusRedirects;
 - (BOOL) _keepKeyboardVisibleDuringFocusRedirects;
 - (void) _stopAssistingFormNode;
 - (void) _nextAccessoryTab:(id)a;
 - (void) _prevAccessoryTab:(id)a;
 - (void) _displayFormNodeInputView;
 - (id) _editingDelegateForEverythingExceptForms;
 - (void) _setInputViewBoundsForAutomaticKeyboardInfo:(id)aadjustScrollView:(BOOL)b;
 - (void) _updateFixedPositioningObjectsLayoutSoon;
 - (void) _zoomToNode:(id)aforceScroll:(BOOL)b;
 - (void) _updateAccessory;
 - (void) _updateAutoFillButton;
 - (void) setAllowDOMFocusRedirects:(BOOL)a;
 - (void) _scrollCaretToVisible:(id)a;
 - (void) _autoFillFrame:(id)a;
 - (void) _startDeferringEvents;
 - (void) _dispatchWebEvent:(id)a;
 - (void) _endDeferringEvents;
 - (BOOL) _shouldDeferEvents;
 - (void) _deferWebEvent:(id)a;
 - (void) _handleDeferredEvents;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _activeRectForRectToCenter:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _centerRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforSizeChange:(BOOL)bwithVisibleHeight:(d)cpinningEdge:(Q)dtoValue:(d)e;
 - (void) _zoomToRect:({CGRect={CGPoint=dd}{CGSize=dd}})aensuringVisibilityOfRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithScale:(d)cforceScroll:(BOOL)d;
 - (void) _zoomToRect:({CGRect={CGPoint=dd}{CGSize=dd}})aensuringVisibilityOfRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithScale:(d)cforceScroll:(BOOL)dformAssistantFrame:({CGRect={CGPoint=dd}{CGSize=dd}})eanimationDuration:(d)f;
 - (void) clearMessagesMatchingMask:(i)a;
 - ({CGSize=dd}) _defaultScrollViewContentSize;
 - (void) _noteOverflowScrollViewPendingInsertion:(id)a;
 - (void) _noteOverflowScrollViewPendingDeletion:(id)a;
 - (void) _removeAdditionalSubview:(id)a;
 - (BOOL) appendOverflowScrollForNode:(id)aoffset:({CGPoint=dd})bwhileScrolling:(BOOL)c;
 - (void) _webThreadOverflowScrollOffsetChanged;
 - (void) _addAdditionalSubview:(id)a;
 - ({?=ddd}) scalesForContainerSize:({CGSize=dd})a;
 - (void) updateBoundariesOfScrollView:(id)awithScales:({?=ddd})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectOfInterestForRotation;
 - (d) minimumVerticalContentOffset;
 - (d) heightToKeepVisible;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) activeRectForRectOfInterest:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) considerHeightOfRectOfInterestForRotation;
 - (d) scaleForProposedNewScale:(d)aandOldScale:(d)b;
 - ({CGSize=dd}) contentSizeForScrollView:(id)a;
 - (void) simulateDidScroll;
 - (void) _assistFormNode:(id)a;
 - ({CGPoint=dd}) _convertWindowPointToViewport:({CGPoint=dd})a;
 - (void) _centerRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforSizeChange:(BOOL)bwithVisibleHeight:(d)cpinningEdge:(Q)d;
 - (void) _zoomToRect:({CGRect={CGPoint=dd}{CGSize=dd}})awithScale:(d)b;
 - (id) messagesMatchingMask:(i)a;
 - (BOOL) _dumpWebArchiveAtPath:(id)a;
 - (void) _clearSelectionAndUI;
 - (void) _setSelectedDOMRangeAndUpdateUI:(id)a;
 - (id) _absoluteUrlRelativeToDocumentURL:(id)a;
 - (id) addFindOnPageHighlighter;
 - (void) _removeFindOnPageHighlighter:(id)a;
 - (void) _overflowScrollView:(id)awillStartScrollingForNode:(id)b;
 - (void) _overflowScrollView:(id)ascrollOffsetChangedForNode:(id)bwhileScrolling:(BOOL)c;
 - (void) _overflowScrollView:(id)adidEndScrollingForNode:(id)b;
 - (id) _accessory;
 - (BOOL) isAccessoryEnabled;
 - (void) setAccessoryEnabled:(BOOL)a;
 - (BOOL) hasEditedTextField;
 - (void) setAutoFillDelegate:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isEditable;
 - (void) webView:(id)aaddMessageToConsole:(id)bwithSource:(id)c;
 - (void) webView:(id)adidStartProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidFinishLoadForFrame:(id)b;
 - (void) webView:(id)adidFailLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)awillCloseFrame:(id)b;
 - (void) webView:(id)adidFirstLayoutInFrame:(id)b;
 - (void) webView:(id)adidFirstVisuallyNonEmptyLayoutInFrame:(id)b;
 - (void) webViewDidPreventDefaultForEvent:(id)a;
 - (void) webView:(id)aelementDidFocusNode:(id)b;
 - (void) webView:(id)aelementDidBlurNode:(id)b;
 - (void) webViewDidCommitCompositingLayerChanges:(id)a;
 - (void) webView:(id)adidCreateOrUpdateScrollingLayer:(id)bwithContentsLayer:(id)cscrollSize:(id)dforNode:(id)eallowHorizontalScrollbar:(BOOL)fallowVerticalScrollbar:(BOOL)g;
 - (void) webView:(id)awillRemoveScrollingLayer:(id)bwithContentsLayer:(id)cforNode:(id)d;
 - (I) audioSessionCategoryOverride;
 - (id) networkInterfaceName;
 - (BOOL) resignFirstResponder;


@end
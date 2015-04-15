
@protocol WebCoreFrameView;
@interface WebFrameView : WAKView <WebCoreFrameView> {

    WebFrameViewPrivate* _private;
}
 + (id) _viewTypesAllowImageTypeOmission:(BOOL)a;
 + (Class) _viewClassForMIMEType:(id)aallowingPlugins:(BOOL)b;
 + (BOOL) _canShowMIMETypeAsHTML:(id)a;

 - (void) dealloc;
 - (void) finalize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (id) webFrame;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isOpaque;
 - (void) setAllowsScrolling:(BOOL)a;
 - (BOOL) allowsScrolling;
 - (id) _webView;
 - (void) _setWebFrame:(id)a;
 - (id) _scrollView;
 - (Class) _viewClassForMIMEType:(id)a;
 - (id) _makeDocumentViewForDataSource:(id)a;
 - (void) _install;
 - (float) _verticalKeyboardScrollDistance;
 - (id) _contentView;
 - (float) _verticalPageScrollDistance;
 - (void) _frameSizeChanged;
 - (void) setNextKeyView:(id)a;
 - (BOOL) _scrollOverflowInDirection:(unsigned long long)agranularity:(unsigned long long)b;
 - (BOOL) _isScrollable;
 - (BOOL) _isVerticalDocument;
 - (BOOL) _isFlippedDocument;
 - (BOOL) _scrollToBeginningOfDocument;
 - (id) _largestScrollableChild;
 - (void) scrollToBeginningOfDocument:(id)a;
 - (BOOL) _scrollToEndOfDocument;
 - (void) scrollToEndOfDocument:(id)a;
 - (BOOL) _pageVertically:(BOOL)a;
 - (BOOL) _scrollVerticallyBy:(float)a;
 - (BOOL) _pageHorizontally:(BOOL)a;
 - (float) _horizontalPageScrollDistance;
 - (BOOL) _scrollHorizontallyBy:(float)a;
 - (BOOL) _scrollLineVertically:(BOOL)a;
 - (BOOL) _scrollLineHorizontally:(BOOL)a;
 - (float) _horizontalKeyboardScrollDistance;
 - (BOOL) _pageInBlockProgressionDirection:(BOOL)a;
 - (void) scrollPageUp:(id)a;
 - (void) scrollPageDown:(id)a;
 - (void) scrollLineUp:(id)a;
 - (void) scrollLineDown:(id)a;
 - (void) _forwardMouseEvent:(id)a;
 - (void) _goForward;
 - (void) _goBack;
 - (BOOL) _firstResponderIsFormControl;
 - (id) _webcore_effectiveFirstResponder;
 - (BOOL) documentViewShouldHandlePrint;
 - (void) printDocumentView;
 - (BOOL) _hasScrollBars;
 - (float) _area;
 - (id) _largestChildWithScrollBars;
 - (Class) _customScrollViewClass;
 - (BOOL) acceptsFirstResponder;
 - (void) mouseDown:(id)a;
 - (void) mouseUp:(id)a;
 - (id) documentView;
 - (void) _setDocumentView:(id)a;
 - (void) keyDown:(id)a;
 - (BOOL) becomeFirstResponder;
 - (void) setFrameSize:({CGSize=dd})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) scrollView:(id)ashouldScrollToPoint:({CGPoint=dd})b;
 - (void) viewDidMoveToWindow;
 - (void) frameSizeChanged;
 - (^{Frame=^^?I{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}iiii}}^{MainFrame}^{Page}{RefPtr<WebCore::Settings>=^{Settings}}{FrameTree=^{Frame}^{Frame}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{RefPtr<WebCore::Frame>=^{Frame}}^{Frame}{RefPtr<WebCore::Frame>=^{Frame}}^{Frame}I}{FrameLoader=^{Frame}^{FrameLoaderClient}{unique_ptr<WebCore::PolicyChecker, std::__1::default_delete<WebCore::PolicyChecker> >={__compressed_pair<WebCore::PolicyChecker *, std::__1::default_delete<WebCore::PolicyChecker> >=^{PolicyChecker}}}{unique_ptr<WebCore::HistoryController, std::__1::default_delete<WebCore::HistoryController> >={__compressed_pair<WebCore::HistoryController *, std::__1::default_delete<WebCore::HistoryController> >=^{HistoryController}}}{ResourceLoadNotifier=^{Frame}}{unique_ptr<WebCore::SubframeLoader, std::__1::default_delete<WebCore::SubframeLoader> >={__compressed_pair<WebCore::SubframeLoader *, std::__1::default_delete<WebCore::SubframeLoader> >=^{SubframeLoader}}}{FrameLoaderStateMachine=i}{unique_ptr<WebCore::IconController, std::__1::default_delete<WebCore::IconController> >={__compressed_pair<WebCore::IconController *, std::__1::default_delete<WebCore::IconController> >=^{IconController}}}{MixedContentChecker=^{Frame}}{unique_ptr<WebCore::FrameLoader::FrameProgressTracker, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> >={__compressed_pair<WebCore::FrameLoader::FrameProgressTracker *, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> >=^{FrameProgressTracker}}}ii{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}BBBB{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}BBBiB{RefPtr<WebCore::SerializedScriptValue>=^{SerializedScriptValue}}B{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{Timer<WebCore::FrameLoader>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}BB^{Frame}{HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> >={HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> >=^^{Frame}iiii}}BBBBi{RefPtr<WebCore::FrameNetworkingContext>=^{FrameNetworkingContext}}{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{RefPtr<WebCore::HistoryItem>=^{HistoryItem}}{unique_ptr<WebCore::PageActivityAssertionToken, std::__1::default_delete<WebCore::PageActivityAssertionToken> >={__compressed_pair<WebCore::PageActivityAssertionToken *, std::__1::default_delete<WebCore::PageActivityAssertionToken> >=^{PageActivityAssertionToken}}}}{NavigationScheduler=^{Frame}{Timer<WebCore::NavigationScheduler>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{unique_ptr<WebCore::ScheduledNavigation, std::__1::default_delete<WebCore::ScheduledNavigation> >={__compressed_pair<WebCore::ScheduledNavigation *, std::__1::default_delete<WebCore::ScheduledNavigation> >=^{ScheduledNavigation}}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView>=^{FrameView}}{RefPtr<WebCore::Document>=^{Document}}{unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> >={__compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> >=^{ScriptController}}}{unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> >={__compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> >=^{Editor}}}{unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> >={__compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> >=^{FrameSelection}}}{unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> >={__compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> >=^{EventHandler}}}{unique_ptr<WebCore::AnimationController, std::__1::default_delete<WebCore::AnimationController> >={__compressed_pair<WebCore::AnimationController *, std::__1::default_delete<WebCore::AnimationController> >=^{AnimationController}}}{Timer<WebCore::Frame>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}f{IntPoint=ii}{ViewportArguments=ifffffffffffB}Bi{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}iib1b1}ffi}) _web_frame;


@end

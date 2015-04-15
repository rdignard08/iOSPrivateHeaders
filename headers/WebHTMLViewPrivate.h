
@interface WebHTMLViewPrivate : NSObject {

    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    WAKView layerHostingView;
    BOOL drawingIntoLayer;
    WebEvent mouseDownEvent;
    BOOL handlingMouseDownEvent;
    WebEvent keyDownEvent;
    BOOL exposeInputContext;
    {CGPoint="x"d"y"d} lastScrollPosition;
    BOOL inScrollPositionChanged;
    WebPluginController pluginController;
    NSString toolTip;
    id trackingRectOwner;
    ^v trackingRectUserData;
    NSTimer autoscrollTimer;
    WebEvent autoscrollTriggerEvent;
    NSArray pageRects;
    BOOL transparentBackground;
    ^{WebHTMLViewInterpretKeyEventsParameters=^{KeyboardEvent}BBBB} interpretKeyEventsParameters;
    WebDataSource dataSource;
    SEL selectorForDoCommandBySelector;
}
 + (void) initialize;

 - (void) clear;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (void) finalize;


@end

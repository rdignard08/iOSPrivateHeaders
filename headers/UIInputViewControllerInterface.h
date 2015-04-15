
@protocol _UIIVCInterface;
@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface> {

    <_UIIVCResponseDelegate> _responseDelegate;
    <_UIIVCInterface> _forwardingInterface;
    _UIInputViewControllerState _cachedState;
}

 - (void) dealloc;
 - (id) responseDelegate;
 - (void) setResponseDelegate:(id)a;
 - (void) syncToKeyboardState:(id)acompletionHandler:(@?)b;
 - (id) _cachedState;
 - (id) forwardingInterface;
 - (void) _handleInputViewControllerState:(id)a;
 - (void) _setCachedState:(id)a;
 - (void) _tearDownRemoteService;
 - (void) setForwardingInterface:(id)a;
 - (id) init;


@end

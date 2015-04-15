
@protocol AVVideoLayer;
@interface WebAVVideoLayer : CALayer <AVVideoLayer> {

    {RetainPtr<WebAVPlayerController>="m_ptr"^v} _avPlayerController;
    {RetainPtr<AVPlayerViewController>="m_ptr"^v} _avPlayerViewController;
    {RetainPtr<CALayer>="m_ptr"^v} _videoSublayer;
    long long _videoLayerGravity;
    BOOL _readyForDisplay;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _videoRect;
}
 + (id) videoLayer;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (id) init;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) videoRect;
 - (void) setVideoLayerGravity:(long long)a;
 - (void) setPlayerController:(id)a;
 - (long long) videoLayerGravity;
 - (BOOL) isReadyForDisplay;
 - (void) setPlayerViewController:(id)a;
 - (void) setVideoSublayer:(id)a;
 - (id) videoSublayer;
 - (void) setReadyForDisplay:(BOOL)a;
 - (void) setVideoRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

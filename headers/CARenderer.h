
@interface CARenderer : NSObject {

    ^{CARendererPriv=@{Weak<id>=@}@^{Context}^{Renderer}{CGRect={CGPoint=dd}{CGSize=dd}}^{Update}I[2I][2I]Ib8Q[0c]} _priv;
}
@property (atomic, retain, readwrite) CAContext* context;
@property (atomic, weak, readwrite) NSNumber* delegate;
@property (atomic, retain, readwrite) CALayer* layer;
@property (atomic, assign, readwrite) NSNumber* bounds;
 + (id) rendererWithEAGLContext:(id)aoptions:(id)b;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) updateBounds;
 - (id) delegate;
 - (void) setContext:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layer;
 - (void) setLayer:(id)a;
 - (id) _initWithOptions:(id)a;
 - (id) _initWithEAGLContext:(id)aoptions:(id)b;
 - (void) endFrame;
 - (void) beginFrameAtTime:(double)atimeStamp:(^{?=IiqQdq{CVSMPTETime=ssIIIssss}QQ})b;
 - (void) addUpdateRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (double) nextFrameTime;
 - (BOOL) hasMissingContent;
 - (void) render;
 - (id) context;


@end

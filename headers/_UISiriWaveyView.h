
@interface _UISiriWaveyView : UIView {

    {?="m_axisX"{?="m_x"f"m_y"f"m_z"f"m_w"f}"m_axisY"{?="m_x"f"m_y"f"m_z"f"m_w"f}"m_axisZ"{?="m_x"f"m_y"f"m_z"f"m_w"f}"m_trans"{?="m_x"f"m_y"f"m_z"f"m_w"f}} _projection;
    @"CADisplayLink" _displayLink;
    @"EAGLContext" _eaglContext;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _textureHandle;
    unsigned int _programHandle;
    int _attribPosition;
    int _uniformProjection;
    int _uniformOpacity;
    int _uniformLineWidth;
    int _uniformPowerLevel;
    int _uniformDisplayWidth;
    int _uniformTimeOffset;
    int _uniformTexture;
    int _viewWidth;
    int _viewHeight;
    float _projection11;
    double _startTime;
    r^f _lineWidth;
    [5f] _runningPowerLevels;
    unsigned int _powerPointer;
    BOOL _isInitialized;
    BOOL _justStarted;
    int _state;
    @"UIScreen" _screen;
    int _mode;
    @"<_UISiriWaveyViewDelegate>" _delegate;
}
 + (Class) layerClass;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setMode:(int)a;
 - (void) layoutSubviews;
 - (void) didMoveToSuperview;
 - (int) mode;
 - (void) startListening;
 - (float) _updateMedianWithNewValue:(float)a;
 - (float) _powerLevelForMicPower:(float)a;
 - (float) _currentMicPowerLevel;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})ascreen:(id)b;
 - (void) _tearDownDisplayLink;
 - (void) _cleanupGL;
 - (void) _setupDisplayLink;
 - (void) _updateCurveLayer:(id)a;
 - (BOOL) _setupFramebuffer;
 - (BOOL) _setupShaders;
 - (BOOL) _setupVertexBuffer;
 - (BOOL) _setupTexture;
 - (BOOL) _initGL;
 - (BOOL) _resizeFromLayer:(id)a;
 - (void) _updateOrthoProjection;
 - (BOOL) inDictationMode;
 - (BOOL) inSiriMode;
 - (id) delegate;
 - (void) start;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setHidden:(BOOL)a;


@end

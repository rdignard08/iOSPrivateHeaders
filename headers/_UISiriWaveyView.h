
@interface _UISiriWaveyView : UIView {

    {?="m_axisX"{?="m_x"f"m_y"f"m_z"f"m_w"f}"m_axisY"{?="m_x"f"m_y"f"m_z"f"m_w"f}"m_axisZ"{?="m_x"f"m_y"f"m_z"f"m_w"f}"m_trans"{?="m_x"f"m_y"f"m_z"f"m_w"f}} _projection;
    @"CADisplayLink" _displayLink;
    @"EAGLContext" _eaglContext;
    I _framebufferHandle;
    I _renderbufferHandle;
    I _vertexBufferHandle;
    I _textureHandle;
    I _programHandle;
    i _attribPosition;
    i _uniformProjection;
    i _uniformOpacity;
    i _uniformLineWidth;
    i _uniformPowerLevel;
    i _uniformDisplayWidth;
    i _uniformTimeOffset;
    i _uniformTexture;
    i _viewWidth;
    i _viewHeight;
    f _projection11;
    d _startTime;
    r^f _lineWidth;
    [5f] _runningPowerLevels;
    I _powerPointer;
    BOOL _isInitialized;
    BOOL _justStarted;
    i _state;
    @"UIScreen" _screen;
    i _mode;
    @"<_UISiriWaveyViewDelegate>" _delegate;
}
 + (Class) layerClass;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setMode:(i)a;
 - (void) layoutSubviews;
 - (void) didMoveToSuperview;
 - (i) mode;
 - (void) startListening;
 - (f) _updateMedianWithNewValue:(f)a;
 - (f) _powerLevelForMicPower:(f)a;
 - (f) _currentMicPowerLevel;
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

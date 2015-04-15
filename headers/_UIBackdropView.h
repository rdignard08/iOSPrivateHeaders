
@interface _UIBackdropView : UIView {

    BOOL _autosizesToFitSuperview;
    BOOL _computesColorSettings;
    BOOL _appliesOutputSettingsAutomatically;
    BOOL _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
    BOOL _applyingBackdropChanges;
    BOOL _applyingTransition;
    BOOL _requiresTintViews;
    BOOL _wantsColorSettings;
    BOOL _blursBackground;
    BOOL _allowsColorSettingsSuppression;
    BOOL _contentViewAccessed;
    BOOL _contentViewAccessorGuard;
    BOOL _applySettingsAfterLayout;
    BOOL _updateMaskViewsForViewReentrancyGuard;
    BOOL _simulatesMasks;
    BOOL _backdropVisibilitySetOnce;
    BOOL _blurRadiusSetOnce;
    BOOL _disablesOccludedBackdropBlurs;
    BOOL __backdropVisible;
    BOOL __zoomsBack;
    long long _style;
    NSHashTable* _observers;
    <_UIBackdropViewObserver>* _observer;
    double _appliesOutputSettingsAnimationDuration;
    _UIBackdropViewSettings* _inputSettings;
    _UIBackdropViewSettings* _outputSettings;
    _UIBackdropViewSettings* _savedInputSettingsDuringRenderInContext;
    long long _configuration;
    _UIBackdropEffectView* _backdropEffectView;
    NSString* _groupName;
    UIImage* _filterMaskImage;
    UIView* _grayscaleTintView;
    UIImage* _grayscaleTintMaskImage;
    UIView* _colorTintView;
    UIImage* _colorTintMaskImage;
    UIView* _colorBurnTintView;
    UIImage* _colorBurnTintMaskImage;
    CAFilter* _gaussianBlurFilter;
    CAFilter* _colorSaturateFilter;
    CAFilter* _tintFilter;
    UIView* _contentView;
    UIView* _darkeningTintView;
    UIImage* _darkeningTintMaskImage;
    long long _maskMode;
    NSMutableSet* _partialMaskViews;
    UIView* _grayscaleTintMaskViewContainer;
    NSMutableDictionary* _grayscaleTintMaskViewMap;
    UIView* _colorTintMaskViewContainer;
    NSMutableDictionary* _colorTintMaskViewMap;
    UIView* _colorBurnTintMaskViewContainer;
    NSMutableDictionary* _colorBurnTintMaskViewMap;
    UIView* _darkeningTintMaskViewContainer;
    NSMutableDictionary* _darkeningTintMaskViewMap;
    UIView* _filterMaskViewContainer;
    NSMutableDictionary* _filterMaskViewMap;
    id _computeAndApplySettingsNotificationObserver;
    double _colorMatrixGrayscaleTintLevel;
    double _colorMatrixGrayscaleTintAlpha;
    UIColor* _colorMatrixColorTint;
    double _colorMatrixColorTintAlpha;
    long long _blurHardEdges;
    ^{__CFRunLoopObserver=} _updateInputBoundsRunLoopObserver;
    double _previousBackdropStatisticsRed;
    double _previousBackdropStatisticsGreen;
    double _previousBackdropStatisticsBlue;
    double _previousBackdropStatisticsContrast;
    <_UIBackdropViewGraphicsQualityChangeDelegate>* _graphicsQualityChangeDelegate;
    NSString* __blurQuality;
    double __blurRadius;
    double __saturationDeltaFactor;
}
 + (Class) layerClass;
 + (id) allBackdropViews;
 + (Class) defaultSettingsClass;
 + (void) suppressColorSettingsForRunLoopModePush:(id)a;
 + (void) restoreColorSettingsForRunLoopModePop:(id)a;
 + (void) suppressColorSettingsForWillResignActive:(id)a;
 + (void) restoreColorSettingsForDidBecomeActive:(id)a;
 + (void) suppressColorSettingsForRequester:(id)a;
 + (void) restoreColorSettingsForRequester:(id)a;
 + (void) setAllBackdropViewsToGraphicsQuality:(long long)a;
 + (void) adjustGraphicsQualityForAccessibilityIfNeeded:(id)a;

 - (void) setObserver:(id)a ;
 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) grayscaleTintMaskImage;
 - (id) colorTintMaskImage;
 - (id) filterMaskImage;
 - (double) blurRadius;
 - (double) saturationDeltaFactor;
 - (void) setBlurRadius:(double)a ;
 - (void) setSaturationDeltaFactor:(double)a ;
 - (void) didMoveToSuperview;
 - (void) setGraphicsQualityChangeDelegate:(id)a ;
 - (id) initWithPrivateStyle:(long long)a ;
 - (id) inputSettings;
 - (void) setBlurHardEdges:(long long)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a style:(long long)b ;
 - (id) initWithStyle:(long long)a ;
 - (void) updateMaskViewsForView:(id)a ;
 - (id) observer;
 - (void) setComputesColorSettings:(BOOL)a ;
 - (void) setAllowsColorSettingsSuppression:(BOOL)a ;
 - (void) setConfiguration:(long long)a ;
 - (id) grayscaleTintMaskViewContainer;
 - (id) colorTintMaskViewContainer;
 - (id) colorBurnTintMaskViewContainer;
 - (id) darkeningTintMaskViewContainer;
 - (id) filterMaskViewContainer;
 - (void) transitionToStyle:(long long)a ;
 - (BOOL) computesColorSettings;
 - (void) willCallRenderInContextOnBackdropViewLayer;
 - (void) didCallRenderInContextOnBackdropViewLayer;
 - (void) setBackdropVisible:(BOOL)a ;
 - (void) setGrayscaleTintMaskImage:(id)a ;
 - (void) setColorTintMaskImage:(id)a ;
 - (void) setFilterMaskImage:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a privateStyle:(long long)b ;
 - (void) transitionToPrivateStyle:(long long)a ;
 - (void) setShouldRasterizeEffectsView:(BOOL)a ;
 - (id) effectView;
 - (void) setDisablesOccludedBackdropBlurs:(BOOL)a ;
 - (id) blurQuality;
 - (long long) blurHardEdges;
 - (void) _updateInputBounds;
 - (double) _blurRadius;
 - (void) transitionToSettings:(id)a ;
 - (void) setDarkeningTintMaskImage:(id)a ;
 - (void) setBlurQuality:(id)a ;
 - (void) setZoomsBack:(BOOL)a ;
 - (BOOL) isBackdropVisible;
 - (id) colorBurnTintMaskImage;
 - (void) setColorBurnTintMaskImage:(id)a ;
 - (id) darkeningTintMaskImage;
 - (void) settingsDidChange:(id)a ;
 - (void) setBlursWithHardEdges:(BOOL)a ;
 - (BOOL) blursWithHardEdges;
 - (BOOL) _backdropVisible;
 - (BOOL) _zoomsBack;
 - (id) _blurQuality;
 - (double) _saturationDeltaFactor;
 - (void) setAppliesOutputSettingsAnimationDuration:(double)a ;
 - (id) outputSettings;
 - (BOOL) allowsColorSettingsSuppression;
 - (void) setWantsColorSettings:(BOOL)a ;
 - (BOOL) wantsColorSettings;
 - (id) graphicsQualityChangeDelegate;
 - (id) backdropViewLayer;
 - (void) setAutosizesToFitSuperview:(BOOL)a ;
 - (BOOL) autosizesToFitSuperview;
 - (void) setInputSettings:(id)a ;
 - (void) setOutputSettings:(id)a ;
 - (void) setObservers:(id)a ;
 - (void) updateSubviewHierarchyIfNeededForSettings:(id)a ;
 - (void) computeAndApplySettings:(id)a ;
 - (void) setComputeAndApplySettingsNotificationObserver:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a autosizesToFitSuperview:(BOOL)b settings:(id)c ;
 - (id) computeAndApplySettingsNotificationObserver;
 - (void) clearUpdateInputBoundsRunLoopObserver;
 - (id) backdropEffectView;
 - (BOOL) applyingBackdropChanges;
 - (BOOL) appliesOutputSettingsAutomatically;
 - (void) applySettingsWithBuiltInAnimation:(id)a ;
 - (id) observers;
 - (void) setApplyingBackdropChanges:(BOOL)a ;
 - (void) delayedComputeAndApplySettings;
 - (void) setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(BOOL)a ;
 - (BOOL) appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
 - (void) setApplySettingsAfterLayout:(BOOL)a ;
 - (BOOL) applySettingsAfterLayout;
 - (void) adjustTintImplementationIfNeeded:(id)a ;
 - (void) setMaskImage:(id)a onLayer:(id)b ;
 - (id) grayscaleTintView;
 - (id) colorTintView;
 - (id) colorBurnTintView;
 - (id) darkeningTintView;
 - (id) grayscaleTintMaskViewMap;
 - (id) colorTintMaskViewMap;
 - (id) colorBurnTintMaskViewMap;
 - (id) darkeningTintMaskViewMap;
 - (id) filterMaskViewMap;
 - (long long) maskMode;
 - (void) setGrayscaleTintMaskViewMap:(id)a ;
 - (void) setGrayscaleTintMaskViewContainer:(id)a ;
 - (void) setColorTintMaskViewMap:(id)a ;
 - (void) setColorTintMaskViewContainer:(id)a ;
 - (void) setColorBurnTintMaskViewMap:(id)a ;
 - (void) setColorBurnTintMaskViewContainer:(id)a ;
 - (void) setDarkeningTintMaskViewMap:(id)a ;
 - (void) setDarkeningTintMaskViewContainer:(id)a ;
 - (void) setFilterMaskViewMap:(id)a ;
 - (void) setFilterMaskViewContainer:(id)a ;
 - (BOOL) simulatesMasks;
 - (void) removeOverlayBlendModeFromView:(id)a ;
 - (void) applyOverlayBlendModeToView:(id)a ;
 - (BOOL) updateMaskViewsForViewReentrancyGuard;
 - (void) setUpdateMaskViewsForViewReentrancyGuard:(BOOL)a ;
 - (id) partialMaskViews;
 - (void) setPartialMaskViews:(id)a ;
 - (void) updateMaskViewForView:(id)a flag:(long long)b ;
 - (id) gaussianBlurFilter;
 - (id) colorSaturateFilter;
 - (id) tintFilter;
 - (BOOL) blurRadiusSetOnce;
 - (void) setBlurRadiusSetOnce:(BOOL)a ;
 - (void) setBlurFilterWithRadius:(double)a blurQuality:(id)b ;
 - (void) setBlurFilterWithRadius:(double)a blurQuality:(id)b blurHardEdges:(long long)c ;
 - (void) setGaussianBlurFilter:(id)a ;
 - (void) _updateFilters;
 - (void) scheduleUpdateInputBoundsIfNeeded;
 - (^{__CFRunLoopObserver=}) updateInputBoundsRunLoopObserver;
 - (void) setUpdateInputBoundsRunLoopObserver:(^{__CFRunLoopObserver=})a ;
 - (void) setColorSaturateFilter:(id)a ;
 - (void) setTintFilter:(id)a ;
 - (double) colorMatrixGrayscaleTintLevel;
 - (double) colorMatrixGrayscaleTintAlpha;
 - (double) colorMatrixColorTintAlpha;
 - (id) colorMatrixColorTint;
 - (void) setColorMatrixGrayscaleTintLevel:(double)a ;
 - (void) setColorMatrixGrayscaleTintAlpha:(double)a ;
 - (void) setColorMatrixColorTint:(id)a ;
 - (void) setColorMatrixColorTintAlpha:(double)a ;
 - (BOOL) backdropVisibilitySetOnce;
 - (void) setBackdropVisibilitySetOnce:(BOOL)a ;
 - (void) ensureProperSubviewOrdering;
 - (void) setApplyingTransition:(BOOL)a ;
 - (void) prepareForTransitionToSettings:(id)a ;
 - (void) computeAndApplySettingsForTransition;
 - (void) transitionIncrementallyToSettings:(id)a weighting:(double)b ;
 - (void) transitionIncrementallyToStyle:(long long)a weighting:(double)b ;
 - (BOOL) applyingTransition;
 - (BOOL) contentViewAccessorGuard;
 - (void) setContentViewAccessorGuard:(BOOL)a ;
 - (void) setContentViewAccessed:(BOOL)a ;
 - (void) addBackdropEffectViewIfNeededForSettings:(id)a ;
 - (void) addGrayscaleTintViewIfNeededForSettings:(id)a ;
 - (void) addColorTintViewIfNeededForSettings:(id)a ;
 - (void) addColorBurnTintViewIfNeededForSettings:(id)a ;
 - (void) addContentViewIfNeededForSettings:(id)a ;
 - (void) addDarkeningTintViewIfNeededForSettings:(id)a ;
 - (void) setBackdropEffectView:(id)a ;
 - (void) setAppliesOutputSettingsAutomatically:(BOOL)a ;
 - (void) setGrayscaleTintView:(id)a ;
 - (void) setColorTintView:(id)a ;
 - (void) setColorBurnTintView:(id)a ;
 - (void) setDarkeningTintView:(id)a ;
 - (BOOL) contentViewAccessed;
 - (BOOL) requiresTintViews;
 - (void) setTintFilterForSettings:(id)a ;
 - (void) transitionComplete;
 - (double) appliesOutputSettingsAnimationDuration;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a settings:(id)b ;
 - (void) setMaskMode:(long long)a ;
 - (void) removeMaskViews;
 - (void) applyOverlayBlendMode:(long long)a toView:(id)b ;
 - (void) setUsesZoom;
 - (void) _setBlursBackground:(BOOL)a ;
 - (void) transitionToColor:(id)a ;
 - (void) transitionIncrementallyToPrivateStyle:(long long)a weighting:(double)b ;
 - (id) savedInputSettingsDuringRenderInContext;
 - (void) setSavedInputSettingsDuringRenderInContext:(id)a ;
 - (void) setRequiresTintViews:(BOOL)a ;
 - (BOOL) blursBackground;
 - (void) setBlursBackground:(BOOL)a ;
 - (void) setSimulatesMasks:(BOOL)a ;
 - (double) previousBackdropStatisticsRed;
 - (void) setPreviousBackdropStatisticsRed:(double)a ;
 - (double) previousBackdropStatisticsGreen;
 - (void) setPreviousBackdropStatisticsGreen:(double)a ;
 - (double) previousBackdropStatisticsBlue;
 - (void) setPreviousBackdropStatisticsBlue:(double)a ;
 - (double) previousBackdropStatisticsContrast;
 - (void) setPreviousBackdropStatisticsContrast:(double)a ;
 - (void) set_blurQuality:(id)a ;
 - (void) set_blurRadius:(double)a ;
 - (void) set_saturationDeltaFactor:(double)a ;
 - (void) set_backdropVisible:(BOOL)a ;
 - (id) init;
 - (long long) configuration;
 - (void) removeObserver:(id)a ;
 - (void) addObserver:(id)a ;
 - (id) contentView;
 - (void) setContentView:(id)a ;
 - (long long) style;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) initWithSettings:(id)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) applySettings:(id)a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) filters;
 - (id) groupName;
 - (BOOL) disablesOccludedBackdropBlurs;
 - (void) backdropLayerStatisticsDidChange:(id)a ;
 - (void) setGroupName:(id)a ;
 - (void) setStyle:(long long)a ;


@end

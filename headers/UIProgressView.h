
@protocol NSCoding;
@interface UIProgressView : UIView <NSCoding> {

    long long _progressViewStyle;
    float _progress;
    long long _barStyle;
    UIColor* _progressTintColor;
    UIColor* _trackTintColor;
    UIImageView* _trackView;
    UIImageView* _progressView;
    BOOL _isAnimating;
    NSArray* _trackColors;
    NSArray* _progressColors;
    UIImage* _trackImage;
    UIImage* _progressImage;
}
 + ({CGSize=dd}) defaultSize;
 + (id) _tintedImageForHeight:(double)aandColors:(id)broundingRectCorners:(unsigned long long)c;
 + (id) _tintedImageForHeight:(double)aandColors:(id)b;
 + (int) _indexForStyle:(long long)abarStyle:(long long)b;
 + ({?=@@}) _standardImagesForStyle:(long long)abarStyle:(long long)b;

 - (BOOL) af_uploadProgressAnimated;
 - (BOOL) af_downloadProgressAnimated;
 - (void) af_setUploadProgressAnimated:(BOOL)a;
 - (void) af_setDownloadProgressAnimated:(BOOL)a;
 - (void) setProgressWithUploadProgressOfTask:(id)aanimated:(BOOL)b;
 - (void) setProgressWithDownloadProgressOfTask:(id)aanimated:(BOOL)b;
 - (void) setProgressWithUploadProgressOfOperation:(id)aanimated:(BOOL)b;
 - (void) setProgressWithDownloadProgressOfOperation:(id)aanimated:(BOOL)b;
 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (float) progress;
 - (void) setProgress:(float)a;
 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (void) tintColorDidChange;
 - (void) setBarStyle:(long long)a;
 - (long long) barStyle;
 - (void) _updateImages;
 - (void) _setProgress:(float)a;
 - (void) setProgressViewStyle:(long long)a;
 - (BOOL) _shouldTintTrack;
 - (BOOL) _shouldTintProgress;
 - (id) trackTintColor;
 - (id) _defaultTrackColorForCurrentStyle;
 - (unsigned long long) _roundedCornersForTrackForCurrentStyle;
 - (id) progressTintColor;
 - (unsigned long long) _roundedCornersForProgressForCurrentStyle;
 - (id) _appropriateProgressImage;
 - (id) _appropriateTrackImage;
 - (void) _setProgressAnimated:(float)aduration:(double)bdelay:(double)coptions:(unsigned long long)d;
 - (void) setProgressTintColor:(id)a;
 - (id) initWithProgressViewStyle:(long long)a;
 - (void) setProgress:(float)aanimated:(BOOL)b;
 - (id) _progressColor;
 - (void) _setProgressColor:(id)a;
 - (void) setProgressImage:(id)a;
 - (void) setTrackTintColor:(id)a;
 - (void) setTrackImage:(id)a;
 - (long long) progressViewStyle;
 - (id) trackImage;
 - (id) progressImage;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

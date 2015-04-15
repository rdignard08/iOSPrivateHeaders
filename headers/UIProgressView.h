
@protocol NSCoding;
@interface UIProgressView : UIView <NSCoding> {

    q _progressViewStyle;
    f _progress;
    q _barStyle;
    @"UIColor" _progressTintColor;
    @"UIColor" _trackTintColor;
    @"UIImageView" _trackView;
    @"UIImageView" _progressView;
    BOOL _isAnimating;
    @"NSArray" _trackColors;
    @"NSArray" _progressColors;
    @"UIImage" _trackImage;
    @"UIImage" _progressImage;
}
 + ({CGSize=dd}) defaultSize;
 + (id) _tintedImageForHeight:(d)aandColors:(id)broundingRectCorners:(Q)c;
 + (id) _tintedImageForHeight:(d)aandColors:(id)b;
 + (i) _indexForStyle:(q)abarStyle:(q)b;
 + ({?=@@}) _standardImagesForStyle:(q)abarStyle:(q)b;

 - (BOOL) af_uploadProgressAnimated;
 - (BOOL) af_downloadProgressAnimated;
 - (void) af_setUploadProgressAnimated:(BOOL)a;
 - (void) af_setDownloadProgressAnimated:(BOOL)a;
 - (void) setProgressWithUploadProgressOfTask:(id)aanimated:(BOOL)b;
 - (void) setProgressWithDownloadProgressOfTask:(id)aanimated:(BOOL)b;
 - (void) setProgressWithUploadProgressOfOperation:(id)aanimated:(BOOL)b;
 - (void) setProgressWithDownloadProgressOfOperation:(id)aanimated:(BOOL)b;
 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (f) progress;
 - (void) setProgress:(f)a;
 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) layoutSubviews;
 - (BOOL) _contentHuggingDefault_isUsuallyFixedHeight;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (void) tintColorDidChange;
 - (void) setBarStyle:(q)a;
 - (q) barStyle;
 - (void) _updateImages;
 - (void) _setProgress:(f)a;
 - (void) setProgressViewStyle:(q)a;
 - (BOOL) _shouldTintTrack;
 - (BOOL) _shouldTintProgress;
 - (id) trackTintColor;
 - (id) _defaultTrackColorForCurrentStyle;
 - (Q) _roundedCornersForTrackForCurrentStyle;
 - (id) progressTintColor;
 - (Q) _roundedCornersForProgressForCurrentStyle;
 - (id) _appropriateProgressImage;
 - (id) _appropriateTrackImage;
 - (void) _setProgressAnimated:(f)aduration:(d)bdelay:(d)coptions:(Q)d;
 - (void) setProgressTintColor:(id)a;
 - (id) initWithProgressViewStyle:(q)a;
 - (void) setProgress:(f)aanimated:(BOOL)b;
 - (id) _progressColor;
 - (void) _setProgressColor:(id)a;
 - (void) setProgressImage:(id)a;
 - (void) setTrackTintColor:(id)a;
 - (void) setTrackImage:(id)a;
 - (q) progressViewStyle;
 - (id) trackImage;
 - (id) progressImage;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

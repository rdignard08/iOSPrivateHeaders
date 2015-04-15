
@interface _UIPopoverViewArtworkLoader : NSObject {

    long long _backgroundStyle;
    @"NSString" _backgroundSelector;
}
 + (id) backgroundSelectorForBackgroundStyle:(long long)a;

 - (void) dealloc;
 - (double) arrowHeight;
 - (id) initWithBackgroundStyle:(long long)a;
 - (id) topArrowLeftEndCapView;
 - (id) topArrowPinnedView;
 - (id) topArrowView;
 - (id) topArrowRightEndCapView;
 - (id) bottomArrowLeftEndCapView;
 - (id) bottomArrowPinnedView;
 - (id) bottomArrowView;
 - (id) bottomArrowRightEndCapView;
 - (id) shortRightArrowView;
 - (id) rightArrowPinnedTopView;
 - (id) rightArrowBottomEndCapView;
 - (id) rightArrowPinnedBottomView;
 - (id) rightArrowTopEndCapView;
 - (id) rightArrowView;
 - (double) arrowBase;
 - (id) templateImageForDirection:(id)ashortArtwork:(BOOL)b;
 - (BOOL) modern;
 - (double) topArrowStart;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainImageOfSize:({CGSize=dd})b;
 - (double) arrowTopGradientEnd;
 - (double) capCornerRadius;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentsCenterForRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainImageOfSize:({CGSize=dd})b;
 - (id) viewWithContentsImage:(id)arect:({CGRect={CGPoint=dd}{CGSize=dd}})bcenter:({CGRect={CGPoint=dd}{CGSize=dd}})cantialiasingMask:(unsigned int)ddirectionSelector:(id)e;
 - (double) clampArrowBase;
 - (double) sideArrowStart;
 - (double) noArrowTopGradientEnd;
 - (double) bottomEndCapHeight;
 - (double) shortArtArrowTopGradientEnd;
 - (id) shortTopArrowLeftEndCapView;
 - (double) shortArtRightArrowBase;
 - (double) shortArtNoArrowTopGradientEnd;
 - (id) shortBottomArrowLeftEndCapView;
 - (id) shortTopArrowView;
 - (id) shortTopArrowPinnedView;
 - (id) shortTopArrowRightEndCapView;
 - (id) shortBottomArrowView;
 - (id) shortBottomArrowPinnedView;
 - (id) shortBottomArrowRightEndCapView;


@end


@interface BSMutableAnimationSettings : BSAnimationSettings {

}
 + (id) settingsWithDuration:(d)a;
 + (id) settingsWithDuration:(d)atimingFunction:(id)b;
 + (id) settingsWithDuration:(d)adelay:(d)b;
 + (id) settingsWithDuration:(d)adelay:(d)btimingFunction:(id)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) setDelay:(d)a;
 - (void) setFrameInterval:(d)a;
 - (void) setDuration:(d)a;
 - (void) setTimingFunction:(id)a;


@end

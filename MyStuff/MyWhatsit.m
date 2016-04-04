//
//  MyWhatsit.m
//  MyStuff
//
//  Created by Andres Socha on 7/1/14.
//  Copyright (c) 2014 AndreSocha. All rights reserved.
//

#import "MyWhatsit.h"

@implementation MyWhatsit

-(id)initWithName:(NSString*)name location:(NSString*)location
{
    self = [super init];
    if (self) {
        self.name = name;
        self.location = location;
    }
    return self;
}
-(void)postDidChangeNotification
{
    [[NSNotificationCenter defaultCenter]postNotificationName:kWhatsitDidChangeNotification object:self];
}
-(UIImage*)viewImage
{
  if(self.image!=nil)
      return self.image;
    return [UIImage imageNamed:@"camera"];
}
@end

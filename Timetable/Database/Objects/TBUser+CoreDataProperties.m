//
//  TBUser+CoreDataProperties.m
//  Timetable
//
//  Created by 黄亚州 on 2017/8/14.
//  Copyright © 2017年 黄亚州. All rights reserved.
//

#import "TBUser+CoreDataProperties.h"

@implementation TBUser (CoreDataProperties)

+ (NSFetchRequest<TBUser *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"TBUser"];
}

@dynamic user_id;
@dynamic device_id;
@dynamic user_name;
@dynamic user_phone;
@dynamic is_login;
@dynamic user_password;
@dynamic user_ticket;
@dynamic verify;

@end

#!/usr/bin/env ruby

if ARGV.empty?
  puts "No arguments provided"
  exit 1
end

numbers = []
non_numbers = []

ARGV.each do |arg|
  begin
    num = Integer(arg)
    numbers << num
  rescue ArgumentError
    non_numbers << arg
  end
end

numbers.sort.each { |num| puts num }
non_numbers.sort.each { |arg| puts arg }


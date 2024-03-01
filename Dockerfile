FROM scratch
COPY sleep /sleep
CMD ["/sleep", "86400"]
